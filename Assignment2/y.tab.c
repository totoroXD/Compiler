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

#line 2 "hw2.y"
#include<stdio.h>
int yylex();
void yyerror(const char *s);
#line 6 "hw2.y"
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
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 38 "y.tab.c"

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
#define NAME 258
#define INT 259
#define CHAR 260
#define ID 261
#define RETURN 262
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    3,    3,    2,    2,    6,    6,    7,
    7,    4,    4,    8,    9,    9,   10,   10,    5,    5,
   11,   11,   11,   11,   11,   11,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,
};
static const YYINT yylen[] = {                            2,
    2,    2,    0,    6,    5,    8,    7,    4,    3,    1,
    3,    4,    2,    2,    4,    2,    2,    0,    2,    0,
    3,    3,    1,    3,    2,    2,    0,    3,    3,    3,
    3,    1,    1,    1,    3,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    1,    2,    0,    0,    0,
    0,    0,    5,    0,    0,    0,    0,   32,   33,    0,
    0,    0,    0,    0,    0,   36,    0,    0,    4,    0,
   12,    0,   14,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,   25,    7,   26,   19,    0,    0,    0,
    9,    0,    0,    0,   21,   35,   24,    0,    0,   30,
   31,    6,    0,    0,    0,    8,   15,   11,
};
static const YYINT yydgoto[] = {                          2,
   24,    3,    4,   11,   25,   26,   53,   27,   33,   50,
   28,
};
static const YYINT yysindex[] = {                      -240,
 -231,    0, -240, -240,    8,    0,    0,  -39, -212,  -51,
   10,   19,    0,  -16,  -44, -205, -206,    0,    0,  -17,
   -3,   -3,  -16,   70,  -64,    0,   14,  -16,    0,  -16,
    0,   13,    0,    6,   -3,   41,   96,  116,  -50,   -3,
   -3,   -3,   -3,    0,    0,    0,    0,  -41,   -3,   42,
    0,  130,   52,  142,    0,    0,    0,  -26,  -26,    0,
    0,    0,  142, -206,   -3,    0,    0,    0,
};
static const YYINT yyrindex[] = {                        98,
    0,    0,   98,   98,    0,    0,    0,    0,    0,    0,
    0,   55,    0,   35,    0,    0,    0,    0,    0,   11,
  109,  124,   45,  -22,    0,    0,    0,   35,    0,   35,
    0,  -31,    0,  136,   17,   -9,    0,    0,    0,   -2,
   -2,   -2,   -2,    0,    0,    0,    0,    0,  103,   40,
    0,   59,    0,  -28,    0,    0,    0,  -40,  -34,    0,
    0,    0,  -30,    0,   24,    0,    0,    0,
};
static const YYINT yygindex[] = {                        23,
   84,    0,    0,   86,   -8,    0,   43,    0,   46,    0,
   88,
};
#define YYTABLESIZE 279
static const YYINT yytable[] = {                         28,
   28,   10,   28,   28,   28,   29,   29,   13,   29,   29,
   29,   22,   18,   17,   29,   42,    1,   23,   28,   47,
   43,   48,   34,   22,   29,    6,    7,   18,   17,    5,
   22,   34,   34,   34,   34,   34,   22,   34,   27,   27,
   27,   27,   27,   35,   27,   22,   51,    8,   12,   34,
   15,    9,   34,   34,   32,   34,   27,   34,   27,   27,
   45,   27,   16,   27,   27,   27,   27,   27,   27,   34,
   27,   14,   46,   49,   57,   27,   27,   27,   30,   27,
   34,   27,   28,   62,   28,   64,   27,   27,   29,   27,
   29,   27,   66,   27,   22,   13,   22,    3,   16,   10,
   23,   31,   23,   27,   37,   38,   23,   68,    0,   67,
   39,   42,   40,   34,   41,   34,   43,   52,   54,    0,
   27,    0,   27,   58,   59,   60,   61,    0,   44,    0,
    0,    0,   63,   34,    0,   34,    0,   42,   40,   27,
   41,   27,   43,    0,   27,   27,   27,   27,   52,   27,
   27,   27,    0,   27,   55,   27,   56,   42,   40,   20,
   41,   27,   43,    0,   27,   27,   27,   27,   27,   27,
   27,   42,   40,   65,   41,    0,   43,   27,   27,   27,
   27,    0,   27,   42,   40,    0,   41,    0,   43,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,   28,    9,   28,   28,
   28,   28,   29,    0,   29,   29,   29,   29,   22,    0,
   22,   22,   22,   22,   23,    0,   23,   23,   23,   23,
   17,    0,   18,   19,   20,   21,    0,   34,    0,   34,
   34,   34,   34,    0,   27,   18,   19,   36,    0,   27,
    0,    0,    0,    0,   18,   19,   36,   34,    0,   34,
   34,   34,   34,   27,    0,    0,    0,    0,   27,
};
static const YYINT yycheck[] = {                         40,
   41,   41,   43,   44,   45,   40,   41,   59,   43,   44,
   45,   40,   44,   44,   59,   42,  257,   40,   59,   28,
   47,   30,   40,   40,   59,    3,    4,   59,   59,  261,
   59,   41,   42,   43,   44,   45,   40,   47,   41,   42,
   43,   44,   45,   61,   47,   40,   41,   40,  261,   59,
   41,  257,   42,   43,  261,   45,   59,   47,   42,   43,
  125,   45,   44,   47,   41,   42,   43,   44,   45,   59,
   47,  123,   59,   61,  125,   59,   42,   43,  123,   45,
   40,   47,  123,  125,  125,   44,   42,   43,  123,   45,
  125,   47,   41,   59,  123,   41,  125,    0,   59,   41,
  123,   16,  125,   59,   21,   22,  123,   65,   -1,   64,
   23,   42,   43,  123,   45,  125,   47,   34,   35,   -1,
  123,   -1,  125,   40,   41,   42,   43,   -1,   59,   -1,
   -1,   -1,   49,  123,   -1,  125,   -1,   42,   43,  123,
   45,  125,   47,   -1,   42,   43,   44,   45,   65,   47,
   42,   43,   -1,   45,   59,   47,   41,   42,   43,  125,
   45,   59,   47,   -1,   41,   42,   43,   59,   45,  125,
   47,   42,   43,   44,   45,   -1,   47,   42,   43,   44,
   45,   -1,   47,   42,   43,   -1,   45,   -1,   47,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  257,  259,  260,
  261,  262,  257,   -1,  259,  260,  261,  262,  257,   -1,
  259,  260,  261,  262,  257,   -1,  259,  260,  261,  262,
  257,   -1,  259,  260,  261,  262,   -1,  257,   -1,  259,
  260,  261,  262,   -1,  257,  259,  260,  261,   -1,  262,
   -1,   -1,   -1,   -1,  259,  260,  261,  257,   -1,  259,
  260,  261,  262,  257,   -1,   -1,   -1,   -1,  262,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 262
#define YYUNDFTOKEN 276
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
0,0,0,0,0,0,"TYPE","NAME","INT","CHAR","ID","RETURN",0,0,0,0,0,0,0,0,0,0,0,0,0,
"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : program",
"program : function program",
"program : function_dec program",
"program :",
"function_dec : TYPE ID '(' para_dec ')' ';'",
"function_dec : TYPE ID '(' ')' ';'",
"function : TYPE ID '(' para_dec ')' '{' stmt_list '}'",
"function : TYPE ID '(' ')' '{' stmt_list '}'",
"function_call : ID '(' parameters ')'",
"function_call : ID '(' ')'",
"parameters : expression",
"parameters : expression ',' parameters",
"para_dec : TYPE ID ',' para_dec",
"para_dec : TYPE ID",
"var_dec : TYPE id_list",
"id_list : ID option ',' id_list",
"id_list : ID option",
"option : '=' expression",
"option :",
"stmt_list : statement stmt_list",
"stmt_list :",
"statement : RETURN expression ';'",
"statement : ID '=' expression",
"statement : expression",
"statement : '{' statement '}'",
"statement : expression ';'",
"statement : var_dec ';'",
"expression :",
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
#line 80 "hw2.y"
void yyerror(const char *s){
    fprintf(stderr, "\t\t%s\n:", s);
}
int main(void){
    yyparse();
    return 0;
}
#line 290 "y.tab.c"

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
#line 28 "hw2.y"
	{printf("program -> function program\n");}
break;
case 2:
#line 29 "hw2.y"
	{printf("program -> function_dec program\n");}
break;
case 3:
#line 30 "hw2.y"
	{printf("program -> empty\n");}
break;
case 4:
#line 33 "hw2.y"
	{printf("function_dec -> TYPE ID(para_dec);\n");}
break;
case 5:
#line 34 "hw2.y"
	{printf("function_dec -> TYPE ID();\n");}
break;
case 6:
#line 36 "hw2.y"
	{printf("function -> TYPE ID '(' para_dec ')' '{' stmt_list '}'\n");}
break;
case 7:
#line 37 "hw2.y"
	{printf("function -> TYPE ID() '{' stmt_list '}'\n");}
break;
case 8:
#line 39 "hw2.y"
	{printf("function_call -> TYPE ID '(' parameters ')'\n");}
break;
case 9:
#line 40 "hw2.y"
	{printf("function_call -> TYPE ID '(' ')'\n");}
break;
case 10:
#line 41 "hw2.y"
	{printf("parameters -> expression\n");}
break;
case 11:
#line 42 "hw2.y"
	{printf("parameters -> expression ',' parameters\n");}
break;
case 12:
#line 45 "hw2.y"
	{printf("para_dec -> TYPE ID ',' parameters\n");}
break;
case 13:
#line 46 "hw2.y"
	{printf("para_dec -> TYPE ID para_dec\n");}
break;
case 14:
#line 49 "hw2.y"
	{printf("var_dec -> TYPE ID\n");}
break;
case 15:
#line 51 "hw2.y"
	{printf("id_list -> ID '=' expression\n");}
break;
case 16:
#line 52 "hw2.y"
	{printf("id_list -> ID '=' expression\n");}
break;
case 17:
#line 54 "hw2.y"
	{printf("option -> '=' expression\n");}
break;
case 18:
#line 55 "hw2.y"
	{printf("option -> empty\n");}
break;
case 19:
#line 57 "hw2.y"
	{printf("stmt_list -> statement stmt_list\n");}
break;
case 20:
#line 58 "hw2.y"
	{printf("stmt_list -> empty\n");}
break;
case 21:
#line 60 "hw2.y"
	{printf("statement -> return expression';'\n");}
break;
case 22:
#line 61 "hw2.y"
	{printf("statement -> ID '=' expression\n");}
break;
case 23:
#line 62 "hw2.y"
	{printf("statement -> expression\n"); }
break;
case 24:
#line 63 "hw2.y"
	{printf("statement -> {statement}';'\n");}
break;
case 25:
#line 64 "hw2.y"
	{printf("statement -> expression';'\n");}
break;
case 26:
#line 65 "hw2.y"
	{printf("statement -> var_dec ';'\n");}
break;
case 28:
#line 69 "hw2.y"
	{yyval.ival = yystack.l_mark[-2].ival+yystack.l_mark[0].ival;printf("expression -> expression '+' expression\n");}
break;
case 29:
#line 70 "hw2.y"
	{yyval.ival = yystack.l_mark[-2].ival+yystack.l_mark[0].ival;printf("expression -> expression '-' expression\n");}
break;
case 30:
#line 71 "hw2.y"
	{yyval.ival = yystack.l_mark[-2].ival+yystack.l_mark[0].ival;printf("expression -> expression '+' expression\n");}
break;
case 31:
#line 72 "hw2.y"
	{yyval.ival = yystack.l_mark[-2].ival+yystack.l_mark[0].ival;printf("expression -> expression '-' expression\n");}
break;
case 32:
#line 73 "hw2.y"
	{yyval.ival = yystack.l_mark[0].ival;printf("expression -> INT\n");}
break;
case 33:
#line 74 "hw2.y"
	{yyval.ival = yystack.l_mark[0].cval;printf("expression -> CHAR\n");}
break;
case 34:
#line 75 "hw2.y"
	{printf("expression -> ID\n");}
break;
case 35:
#line 76 "hw2.y"
	{printf("expression -> '(' expression ')'\n");}
break;
case 36:
#line 77 "hw2.y"
	{printf("expression -> function_call\n");}
break;
#line 632 "y.tab.c"
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
