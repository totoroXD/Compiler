%{
#include<stdio.h>
int yylex();
void yyerror(const char *s);
FILE *f_asm;

int cnt=0,off=-8,argcnt=0;

struct Entry{
    int offset;
    char name[11];
};

struct Entry table[111];

%}
%union{
    double dval;
    int ival;
    char cval;
    char sval[11];
}
%right '='
%left '+' '-'
%left '*' '/'

%token TYPE 
%token <ival> INT
%token <cval> CHAR
%token <sval> ID
%token RETURN
%type <ival> expression
%type <ival> function
%type <ival> option
%start program



%%
program : function program{printf("program -> function program\n");}
        | {printf("program -> empty\n");}
        ;

function : TYPE ID {func_start($2);} '(' para_dec ')' 
            '{' stmt_list '}' 
            {
                func_end($2);
                printf("function -> TYPE ID '(' para_dec ')' '{' stmt_list '}'\n");
            }
        ;
function_call : ID {argcnt=0;}
                '(' parameters ')' {
                printf("function_call -> TYPE ID '(' parameters ')'\n");
                fprintf(f_asm, "    jal %s\n", $1);
            }
        ;
parameters : expression {
                printf("parameters -> expression\n");
                fprintf(f_asm, "    lwi $r%d,[$sp+4]\n",argcnt++);
                fprintf(f_asm, "    addi $sp, $sp, -4\n");

            }
        | expression ',' parameters {
                printf("parameters -> expression ',' parameters\n");
                fprintf(f_asm, "    lwi $r%d,[$sp+4]\n",argcnt++);
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
            }
        | 
        ;

para_dec : 
          TYPE ID ',' para_dec {
                printf("para_dec -> TYPE ID ',' parameters\n");
                install($2);
                fprintf(f_asm, "    swi $r%d,[$fp+(%d)]\n", argcnt,vof($2));
                argcnt++;
            }
        | TYPE ID {
                printf("para_dec -> TYPE ID para_dec\n");
                install($2);
                fprintf(f_asm, "    swi $r%d,[$fp+(%d)]\n", argcnt, vof($2));
                argcnt++;
            }
        | {printf("para_dec -> empty\n");}
        ;

var_dec : TYPE id_list {printf("var_dec -> TYPE ID\n");}
        ;
id_list : ID_dec ',' id_list {printf("id_list -> ID '=' expression\n");}
        | ID_dec {printf("id_list -> ID '=' expression\n");}
        ;
ID_dec : ID option{
                install($1);
                //fprintf(f_asm, "%s\n",$1);
                fprintf(f_asm, "    movi $r0, %d\n",$2);
                fprintf(f_asm, "    swi $r0,[$fp+(%d)]\n", vof($1));
                fprintf(f_asm, "\n");
            }
        | ID {
                install($1);
            }
        ;
option : '=' INT {
                printf("option -> '=' expression\n");
                $$=$2;
            }
        | {printf("option -> empty\n");}
        ;
stmt_list : statement stmt_list {printf("stmt_list -> statement stmt_list\n");}
        | {printf("stmt_list -> empty\n");}
        ;
statement : RETURN expression ';' {
            func_end("GG");
            printf("statement -> return expression';'\n");
        }
        | expression {printf("statement -> expression\n"); }
        | '{' stmt_list'}' {printf("statement -> {stmt_list}';'\n");}
        | expression ';' {printf("statement -> expression';'\n");}
        | var_dec ';' {printf("statement -> var_dec ';'\n");}
        ;

expression : 
          ID '=' expression {
                printf("expression -> ID '=' expression\n");
                printf("%s\n",$1);
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    swi $r0,[$fp+(%d)]\n", vof($1));
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
        | expression '+' expression {
                printf("expression -> expression '+' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    add $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
        | expression '-' expression {
                printf("expression -> expression '-' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    sub $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
        | expression '*' expression {
                printf("expression -> expression '*' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    mul $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
        | expression '/' expression {
                printf("expression -> expression '/' expression\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    divsr $r0, $7, $r0, $r1\n");
                fprintf(f_asm, "    lwi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, +4\n");
            }
        | INT {
                printf("expression -> INT\n");
                fprintf(f_asm, "    movi $r0, %d\n", $1);
                fprintf(f_asm, "    swi $r0,[$sp]\n");
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
                $$=$1;
            }
        | CHAR {$$ = $1;printf("expression -> CHAR\n");} 
        | ID {
                printf("expression -> ID\n");
                fprintf(f_asm, "    lwi $r0,[$fp+(%d)]\n", vof($1));
                fprintf(f_asm, "    swi $r0,[$sp]\n");
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
            }
        | '(' expression ')' {printf("expression -> '(' expression ')'\n");}
        | function_call {printf("expression -> function_call\n");}
        ;
%%
void install(const char *vname){
    table[cnt].offset=off;
    strcpy(table[cnt].name, vname);
    //fprintf(f_asm, "    install %s\n",vname);
    off-=4;
    cnt++;
}
int vof(const char *vname){
    int i;
    for(i=0; i<cnt; i++)
        if(!strcmp(vname,table[i].name))
            return table[i].offset;
    return 7122;
}

void func_start(const char *s){
    off=-8;
    argcnt=0;
    fprintf(f_asm, "%s:\n",s);
    fprintf(f_asm, "    push.s {$fp $lp}\n");
    fprintf(f_asm, "    addi $fp, $sp, 8\n");
    fprintf(f_asm, "    addi $sp, $sp, -24\n");
}
void func_end(const char *s){
    fprintf(f_asm, "    addi $sp, $fp, -8\n");
    fprintf(f_asm, "    pop.s {$fp $lp}\n");
    fprintf(f_asm, "    ret\n");
}
void yyerror(const char *s){
    fprintf(stderr, "\t\t%s\n:", s);
}
int main(void){
    f_asm=fopen("andes.s","w");
    fprintf(f_asm, "    .text\n");
    fprintf(f_asm, "    .align  2\n");
    fprintf(f_asm, "    .global main\n");
    fprintf(f_asm, "    .type   main, @function\n");
    yyparse();
    fprintf(f_asm, "    .size   main, .-main\n");
    return 0;
}