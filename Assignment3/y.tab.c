/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20141128

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "101062391_hw3.y"
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

#line 17 "101062391_hw3.y"
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
typedef union{
    double dval;
    int ival;
    char cval;
    char sval[11];
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 50 "y.tab.c"

/* compatibility with bison */
#ifdef YYPARSE_PARAM
/* compatibility with FreeBSD */
# ifdef YYPARSE_PARAM_TYPE
#  define YYPARSE_DECL() yyparse(YYPARSE_PARAM_TYPE YYPARSE_PARAM)
# else
#  define YYPARSE_DECL() yyparse(void *YYPARSE_PARAM)
# endif
#else
# define YYPARSE_DECL() yyparse(void)
#endif

/* Parameters sent to lex. */
#ifdef YYLEX_PARAM
# define YYLEX_DECL() yylex(void *YYLEX_PARAM)
# define YYLEX yylex(YYLEX_PARAM)
#else
# define YYLEX_DECL() yylex(void)
# define YYLEX yylex()
#endif

/* Parameters sent to yyerror. */
#ifndef YYERROR_DECL
#define YYERROR_DECL() yyerror(const char *s)
#endif
#ifndef YYERROR_CALL
#define YYERROR_CALL(msg) yyerror(msg)
#endif

extern int YYPARSE_DECL();

#define TYPE 257
#define INT 258
#define CHAR 259
#define ID 260
#define RETURN 261
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    4,    2,    8,    7,    9,    9,    9,    5,
    5,    5,   10,   11,   11,   12,   12,    3,    3,    6,
    6,   13,   13,   13,   13,   13,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    2,    0,    0,    9,    0,    5,    1,    3,    0,    4,
    2,    0,    2,    3,    1,    2,    1,    2,    0,    2,
    0,    3,    1,    3,    2,    2,    3,    3,    3,    3,
    3,    1,    1,    1,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    3,    1,    0,    0,    0,    0,    0,
    0,    0,    0,   10,    0,   32,   33,    0,    0,    0,
    0,    0,    0,   36,    0,    0,    0,   13,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,   25,    4,
   26,   20,    0,   16,    0,    0,    0,   22,   35,   24,
    0,    0,   30,   31,   18,   14,    0,    0,    0,    6,
    8,
};
static const YYINT yydgoto[] = {                          2,
   22,    3,   44,    6,    9,   23,   24,   31,   58,   25,
   28,   29,   26,
};
static const YYINT yysindex[] = {                      -251,
 -250,    0, -251,    0,    0,  -26, -242, -244,  -18,  -12,
  -97, -242,   -6,    0, -227,    0,    0,    5,   -2,   -2,
   -6,   -3,  -90,    0,  -14,   -6,    7,    0,   10,   -2,
   39,    8,   18,  -50,   -2,   -2,   -2,   -2,    0,    0,
    0,    0, -177,    0, -227,   35,   -2,    0,    0,    0,
   15,   15,    0,    0,    0,    0,   29,   45,   -2,    0,
    0,
};
static const YYINT yyrindex[] = {                        84,
    0,    0,   84,    0,    0,    0,   46,    0,    0,  -18,
    0,   46,  -37,    0,    0,    0,    0,  -40,    0,    0,
  -37,  -11,    0,    0,    0,  -37,   -7,    0,   30,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,  -16,   49,    0,    0,    0,
  -32,  -23,    0,    0,    0,    0,   51,    0,   49,    0,
    0,
};
static const YYINT yygindex[] = {                        91,
   11,    0,    0,    0,   83,   43,    0,    0,   37,    0,
   52,    0,    0,
};
#define YYTABLESIZE 258
static const YYINT yytable[] = {                          5,
   34,   34,   34,   34,   34,    1,   34,   28,   28,    4,
   28,   28,   28,    7,    8,   10,   29,   29,   34,   29,
   29,   29,   11,   27,   27,   13,   28,   27,   23,   32,
   33,   12,   27,   20,   40,   29,   17,   20,   37,   35,
   46,   36,   27,   38,   41,   51,   52,   53,   54,   37,
   35,   17,   36,   45,   38,   39,   37,   57,   49,   37,
   35,   38,   36,   34,   38,   30,   48,   43,   42,   57,
   37,   35,   59,   36,   50,   38,   37,   35,   47,   36,
   55,   38,   34,    2,   34,   60,   12,   21,   15,    9,
   28,    7,   28,    5,   14,   61,   56,    0,    0,   29,
    0,   29,    0,    0,    0,    0,   27,    0,   27,    0,
    0,   23,    0,   23,    0,    0,   21,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   34,   34,   34,   34,
   34,    0,    0,    0,   28,   28,   28,   28,   28,    0,
    0,    0,    0,   29,   29,   29,   29,   29,    0,    0,
   27,   27,   27,   27,   27,   23,   23,   23,   23,   23,
   15,   16,   17,   18,   19,   16,   17,   18,
};
static const YYINT yycheck[] = {                         40,
   41,   42,   43,   44,   45,  257,   47,   40,   41,  260,
   43,   44,   45,   40,  257,  260,   40,   41,   59,   43,
   44,   45,   41,   40,   41,  123,   59,   44,   40,   19,
   20,   44,  260,   40,  125,   59,   44,   40,   42,   43,
   30,   45,   59,   47,   59,   35,   36,   37,   38,   42,
   43,   59,   45,   44,   47,   59,   42,   47,   41,   42,
   43,   47,   45,   21,   47,   61,   59,   61,   26,   59,
   42,   43,   44,   45,  125,   47,   42,   43,   40,   45,
  258,   47,  123,    0,  125,   41,   41,  125,   59,   41,
  123,   41,  125,    3,   12,   59,   45,   -1,   -1,  123,
   -1,  125,   -1,   -1,   -1,   -1,  123,   -1,  125,   -1,
   -1,  123,   -1,  125,   -1,   -1,  123,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  259,  260,
  261,   -1,   -1,   -1,  257,  258,  259,  260,  261,   -1,
   -1,   -1,   -1,  257,  258,  259,  260,  261,   -1,   -1,
  257,  258,  259,  260,  261,  257,  258,  259,  260,  261,
  257,  258,  259,  260,  261,  258,  259,  260,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 261
#define YYUNDFTOKEN 277
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'","','","'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,
"';'",0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'{'",0,"'}'",0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"TYPE","INT","CHAR","ID","RETURN",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : function program",
"program :",
"$$1 :",
"function : TYPE ID $$1 '(' para_dec ')' '{' stmt_list '}'",
"$$2 :",
"function_call : ID $$2 '(' parameters ')'",
"parameters : expression",
"parameters : expression ',' parameters",
"parameters :",
"para_dec : TYPE ID ',' para_dec",
"para_dec : TYPE ID",
"para_dec :",
"var_dec : TYPE id_list",
"id_list : ID_dec ',' id_list",
"id_list : ID_dec",
"ID_dec : ID option",
"ID_dec : ID",
"option : '=' INT",
"option :",
"stmt_list : statement stmt_list",
"stmt_list :",
"statement : RETURN expression ';'",
"statement : expression",
"statement : '{' stmt_list '}'",
"statement : expression ';'",
"statement : var_dec ';'",
"expression : ID '=' expression",
"expression : expression '+' expression",
"expression : expression '-' expression",
"expression : expression '*' expression",
"expression : expression '/' expression",
"expression : INT",
"expression : CHAR",
"expression : ID",
"expression : '(' expression ')'",
"expression : function_call",

};
#endif

int      yydebug;
int      yynerrs;

int      yyerrflag;
int      yychar;
YYSTYPE  yyval;
YYSTYPE  yylval;

/* define the initial stack-sizes */
#ifdef YYSTACKSIZE
#undef YYMAXDEPTH
#define YYMAXDEPTH  YYSTACKSIZE
#else
#ifdef YYMAXDEPTH
#define YYSTACKSIZE YYMAXDEPTH
#else
#define YYSTACKSIZE 10000
#define YYMAXDEPTH  10000
#endif
#endif

#define YYINITSTACKSIZE 200

typedef struct {
    unsigned stacksize;
    YYINT    *s_base;
    YYINT    *s_mark;
    YYINT    *s_last;
    YYSTYPE  *l_base;
    YYSTYPE  *l_mark;
} YYSTACKDATA;
/* variables for the parser stack */
static YYSTACKDATA yystack;
#line 187 "101062391_hw3.y"
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
#line 331 "y.tab.c"

#if YYDEBUG
#include <stdio.h>		/* needed for printf */
#endif

#include <stdlib.h>	/* needed for malloc, etc */
#include <string.h>	/* needed for memset */

/* allocate initial stack or double stack size, up to YYMAXDEPTH */
static int yygrowstack(YYSTACKDATA *data)
{
    int i;
    unsigned newsize;
    YYINT *newss;
    YYSTYPE *newvs;

    if ((newsize = data->stacksize) == 0)
        newsize = YYINITSTACKSIZE;
    else if (newsize >= YYMAXDEPTH)
        return YYENOMEM;
    else if ((newsize *= 2) > YYMAXDEPTH)
        newsize = YYMAXDEPTH;

    i = (int) (data->s_mark - data->s_base);
    newss = (YYINT *)realloc(data->s_base, newsize * sizeof(*newss));
    if (newss == 0)
        return YYENOMEM;

    data->s_base = newss;
    data->s_mark = newss + i;

    newvs = (YYSTYPE *)realloc(data->l_base, newsize * sizeof(*newvs));
    if (newvs == 0)
        return YYENOMEM;

    data->l_base = newvs;
    data->l_mark = newvs + i;

    data->stacksize = newsize;
    data->s_last = data->s_base + newsize - 1;
    return 0;
}

#if YYPURE || defined(YY_NO_LEAKS)
static void yyfreestack(YYSTACKDATA *data)
{
    free(data->s_base);
    free(data->l_base);
    memset(data, 0, sizeof(*data));
}
#else
#define yyfreestack(data) /* nothing */
#endif

#define YYABORT  goto yyabort
#define YYREJECT goto yyabort
#define YYACCEPT goto yyaccept
#define YYERROR  goto yyerrlab

int
YYPARSE_DECL()
{
    int yym, yyn, yystate;
#if YYDEBUG
    const char *yys;

    if ((yys = getenv("YYDEBUG")) != 0)
    {
        yyn = *yys;
        if (yyn >= '0' && yyn <= '9')
            yydebug = yyn - '0';
    }
#endif

    yynerrs = 0;
    yyerrflag = 0;
    yychar = YYEMPTY;
    yystate = 0;

#if YYPURE
    memset(&yystack, 0, sizeof(yystack));
#endif

    if (yystack.s_base == NULL && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
    yystack.s_mark = yystack.s_base;
    yystack.l_mark = yystack.l_base;
    yystate = 0;
    *yystack.s_mark = 0;

yyloop:
    if ((yyn = yydefred[yystate]) != 0) goto yyreduce;
    if (yychar < 0)
    {
        if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if ((yyn = yysindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
        {
            goto yyoverflow;
        }
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if ((yyn = yyrindex[yystate]) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab;

yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if ((yyn = yysindex[*yystack.s_mark]) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
                {
                    goto yyoverflow;
                }
                yystate = yytable[yyn];
                *++yystack.s_mark = yytable[yyn];
                *++yystack.l_mark = yylval;
                goto yyloop;
            }
            else
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: error recovery discarding state %d\n",
                            YYPREFIX, *yystack.s_mark);
#endif
                if (yystack.s_mark <= yystack.s_base) goto yyabort;
                --yystack.s_mark;
                --yystack.l_mark;
            }
        }
    }
    else
    {
        if (yychar == YYEOF) goto yyabort;
#if YYDEBUG
        if (yydebug)
        {
            yys = yyname[YYTRANSLATE(yychar)];
            printf("%sdebug: state %d, error recovery discards token %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
        yychar = YYEMPTY;
        goto yyloop;
    }

yyreduce:
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: state %d, reducing by rule %d (%s)\n",
                YYPREFIX, yystate, yyn, yyrule[yyn]);
#endif
    yym = yylen[yyn];
    if (yym)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);
    switch (yyn)
    {
case 1:
#line 40 "101062391_hw3.y"
	{printf("program -> function program\n");}
break;
case 2:
#line 41 "101062391_hw3.y"
	{printf("program -> empty\n");}
break;
case 3:
#line 44 "101062391_hw3.y"
	{func_start(yystack.l_mark[0].sval);}
break;
case 4:
#line 46 "101062391_hw3.y"
	{
                func_end(yystack.l_mark[-7].sval);
                printf("function -> TYPE ID '(' para_dec ')' '{' stmt_list '}'\n");
            }
break;
case 5:
#line 51 "101062391_hw3.y"
	{argcnt=0;}
break;
case 6:
#line 52 "101062391_hw3.y"
	{
                printf("function_call -> TYPE ID '(' parameters ')'\n");
                fprintf(f_asm, "    jal %s\n", yystack.l_mark[-4].sval);
            }
break;
case 7:
#line 57 "101062391_hw3.y"
	{
                printf("parameters -> expression\n");
                fprintf(f_asm, "    lwi $r%d,[$sp+4]\n",argcnt++);
                fprintf(f_asm, "    addi $sp, $sp, -4\n");

            }
break;
case 8:
#line 63 "101062391_hw3.y"
	{
                printf("parameters -> expression ',' parameters\n");
                fprintf(f_asm, "    lwi $r%d,[$sp+4]\n",argcnt++);
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
            }
break;
case 10:
#line 72 "101062391_hw3.y"
	{
                printf("para_dec -> TYPE ID ',' parameters\n");
                install(yystack.l_mark[-2].sval);
                fprintf(f_asm, "    swi $r%d,[$fp+(%d)]\n", argcnt,vof(yystack.l_mark[-2].sval));
                argcnt++;
            }
break;
case 11:
#line 78 "101062391_hw3.y"
	{
                printf("para_dec -> TYPE ID para_dec\n");
                install(yystack.l_mark[0].sval);
                fprintf(f_asm, "    swi $r%d,[$fp+(%d)]\n", argcnt, vof(yystack.l_mark[0].sval));
                argcnt++;
            }
break;
case 12:
#line 84 "101062391_hw3.y"
	{printf("para_dec -> empty\n");}
break;
case 13:
#line 87 "101062391_hw3.y"
	{printf("var_dec -> TYPE ID\n");}
break;
case 14:
#line 89 "101062391_hw3.y"
	{printf("id_list -> ID '=' expression\n");}
break;
case 15:
#line 90 "101062391_hw3.y"
	{printf("id_list -> ID '=' expression\n");}
break;
case 16:
#line 92 "101062391_hw3.y"
	{
                install(yystack.l_mark[-1].sval);
                /*fprintf(f_asm, "%s\n",$1);*/
                fprintf(f_asm, "    movi $r0, %d\n",yystack.l_mark[0].ival);
                fprintf(f_asm, "    swi $r0,[$fp+(%d)]\n", vof(yystack.l_mark[-1].sval));
                fprintf(f_asm, "\n");
            }
break;
case 17:
#line 99 "101062391_hw3.y"
	{
                install(yystack.l_mark[0].sval);
            }
break;
case 18:
#line 103 "101062391_hw3.y"
	{
                printf("option -> '=' expression\n");
                yyval.ival=yystack.l_mark[0].ival;
            }
break;
case 19:
#line 107 "101062391_hw3.y"
	{printf("option -> empty\n");}
break;
case 20:
#line 109 "101062391_hw3.y"
	{printf("stmt_list -> statement stmt_list\n");}
break;
case 21:
#line 110 "101062391_hw3.y"
	{printf("stmt_list -> empty\n");}
break;
case 22:
#line 112 "101062391_hw3.y"
	{
            func_end("GG");
            printf("statement -> return expression';'\n");
        }
break;
case 23:
#line 116 "101062391_hw3.y"
	{printf("statement -> expression\n"); }
break;
case 24:
#line 117 "101062391_hw3.y"
	{printf("statement -> {stmt_list}';'\n");}
break;
case 25:
#line 118 "101062391_hw3.y"
	{printf("statement -> expression';'\n");}
break;
case 26:
#line 119 "101062391_hw3.y"
	{printf("statement -> var_dec ';'\n");}
break;
case 27:
#line 123 "101062391_hw3.y"
	{
                printf("expression -> ID '=' expression\n");
                printf("%s\n",yystack.l_mark[-2].sval);
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    swi $r0,[$fp+(%d)]\n", vof(yystack.l_mark[-2].sval));
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
break;
case 28:
#line 131 "101062391_hw3.y"
	{
                printf("expression -> expression '+' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    add $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
break;
case 29:
#line 141 "101062391_hw3.y"
	{
                printf("expression -> expression '-' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    sub $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
break;
case 30:
#line 151 "101062391_hw3.y"
	{
                printf("expression -> expression '*' expression\n");
                fprintf(f_asm, "\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    mul $r0, $r0, $r1\n");
                fprintf(f_asm, "    swi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, 4\n");
                fprintf(f_asm, "\n");
            }
break;
case 31:
#line 161 "101062391_hw3.y"
	{
                printf("expression -> expression '/' expression\n");
                fprintf(f_asm, "    lwi $r0,[$sp+8]\n");
                fprintf(f_asm, "    lwi $r1,[$sp+4]\n");
                fprintf(f_asm, "    divsr $r0, $7, $r0, $r1\n");
                fprintf(f_asm, "    lwi $r1,[$sp+8]\n");
                fprintf(f_asm, "    addi $sp, $sp, +4\n");
            }
break;
case 32:
#line 169 "101062391_hw3.y"
	{
                printf("expression -> INT\n");
                fprintf(f_asm, "    movi $r0, %d\n", yystack.l_mark[0].ival);
                fprintf(f_asm, "    swi $r0,[$sp]\n");
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
                yyval.ival=yystack.l_mark[0].ival;
            }
break;
case 33:
#line 176 "101062391_hw3.y"
	{yyval.ival = yystack.l_mark[0].cval;printf("expression -> CHAR\n");}
break;
case 34:
#line 177 "101062391_hw3.y"
	{
                printf("expression -> ID\n");
                fprintf(f_asm, "    lwi $r0,[$fp+(%d)]\n", vof(yystack.l_mark[0].sval));
                fprintf(f_asm, "    swi $r0,[$sp]\n");
                fprintf(f_asm, "    addi $sp, $sp, -4\n");
            }
break;
case 35:
#line 183 "101062391_hw3.y"
	{printf("expression -> '(' expression ')'\n");}
break;
case 36:
#line 184 "101062391_hw3.y"
	{printf("expression -> function_call\n");}
break;
#line 764 "y.tab.c"
    }
    yystack.s_mark -= yym;
    yystate = *yystack.s_mark;
    yystack.l_mark -= yym;
    yym = yylhs[yyn];
    if (yystate == 0 && yym == 0)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: after reduction, shifting from state 0 to\
 state %d\n", YYPREFIX, YYFINAL);
#endif
        yystate = YYFINAL;
        *++yystack.s_mark = YYFINAL;
        *++yystack.l_mark = yyval;
        if (yychar < 0)
        {
            if ((yychar = YYLEX) < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                yys = yyname[YYTRANSLATE(yychar)];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if ((yyn = yygindex[yym]) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM)
    {
        goto yyoverflow;
    }
    *++yystack.s_mark = (YYINT) yystate;
    *++yystack.l_mark = yyval;
    goto yyloop;

yyoverflow:
    YYERROR_CALL("yacc stack overflow");

yyabort:
    yyfreestack(&yystack);
    return (1);

yyaccept:
    yyfreestack(&yystack);
    return (0);
}
