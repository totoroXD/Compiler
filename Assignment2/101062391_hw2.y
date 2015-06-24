%{
#include<stdio.h>
int yylex();
void yyerror(const char *s);
%}
%union{
    double dval;
    int ival;
    char cval;
}

%left '+' '-'
%left '*' '/'

%token TYPE
%token <vblno> NAME 
%token <ival> INT
%token <cval> CHAR
%token ID
%token RETURN
%type <ival> expression
%type <ival> function
%start program



%%
program : function program{printf("program -> function program\n");}
        | function_dec program{printf("program -> function_dec program\n");}
        | {printf("program -> empty\n");}
        ;

function_dec : TYPE ID '(' para_dec ')' ';' {printf("function_dec -> TYPE ID(para_dec);\n");}
        | TYPE ID '(' ')' ';' {printf("function_dec -> TYPE ID();\n");}
        ;
function : TYPE ID '(' para_dec ')' '{' stmt_list '}' {printf("function -> TYPE ID '(' para_dec ')' '{' stmt_list '}'\n");}
        | TYPE ID '(' ')' '{' stmt_list '}' {printf("function -> TYPE ID() '{' stmt_list '}'\n");}
        ;
function_call : ID '(' parameters ')' {printf("function_call -> TYPE ID '(' parameters ')'\n");}
        | ID '('  ')' {printf("function_call -> TYPE ID '(' ')'\n");}
parameters : expression {printf("parameters -> expression\n");}
        | expression ',' parameters {printf("parameters -> expression ',' parameters\n");}
        ;

para_dec : TYPE ID ',' para_dec {printf("para_dec -> TYPE ID ',' parameters\n");}
        | TYPE ID {printf("para_dec -> TYPE ID para_dec\n");}
        ;

var_dec : TYPE id_list {printf("var_dec -> TYPE ID\n");}
        ;
id_list : ID option ',' id_list {printf("id_list -> ID '=' expression\n");}
        | ID option {printf("id_list -> ID '=' expression\n");}
        ;
option : '=' expression {printf("option -> '=' expression\n");}
        | {printf("option -> empty\n");}
        ;
stmt_list : statement stmt_list {printf("stmt_list -> statement stmt_list\n");}
        | {printf("stmt_list -> empty\n");}
        ;
statement : RETURN expression ';' {printf("statement -> return expression';'\n");}
        | ID '=' statement {printf("statement -> ID '=' expression\n");}
        | expression {printf("statement -> expression\n"); }
        | '{' stmt_list'}' {printf("statement -> {stmt_list}';'\n");}
        | expression ';' {printf("statement -> expression';'\n");}
        | var_dec ';' {printf("statement -> var_dec ';'\n");}
        ;

expression : 
        | expression '+' expression {$$ = $1+$3;printf("expression -> expression '+' expression\n");}
        | expression '-' expression {$$ = $1+$3;printf("expression -> expression '-' expression\n");}
        | expression '*' expression {$$ = $1+$3;printf("expression -> expression '*' expression\n");}
        | expression '/' expression {$$ = $1+$3;printf("expression -> expression '/' expression\n");}
        | INT {$$ = $1;printf("expression -> INT\n");}
        | CHAR {$$ = $1;printf("expression -> CHAR\n");} 
        | ID {printf("expression -> ID\n");}
        | '(' expression ')' {printf("expression -> '(' expression ')'\n");}
        | function_call {printf("expression -> function_call\n");}
        ;
%%
void yyerror(const char *s){
    fprintf(stderr, "\t\t%s\n:", s);
}
int main(void){
    yyparse();
    return 0;
}