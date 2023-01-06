/* original parser id follows */
/* yysccsid[] = "@(#)yaccpar	1.9 (Berkeley) 02/21/93" */
/* (use YYMAJOR/YYMINOR for ifdefs dependent on parser version) */

#define YYBYACC 1
#define YYMAJOR 1
#define YYMINOR 9
#define YYPATCH 20170709

#define YYEMPTY        (-1)
#define yyclearin      (yychar = YYEMPTY)
#define yyerrok        (yyerrflag = 0)
#define YYRECOVERING() (yyerrflag != 0)
#define YYENOMEM       (-2)
#define YYEOF          0
#define YYPREFIX "yy"

#define YYPURE 0

#line 2 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yylex();
int yyerror();
#line 28 "y.tab.c"

#if ! defined(YYSTYPE) && ! defined(YYSTYPE_IS_DECLARED)
/* Default: YYSTYPE is the semantic value type. */
typedef int YYSTYPE;
# define YYSTYPE_IS_DECLARED 1
#endif

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

#define IF 257
#define LT 258
#define LTE 259
#define GT 260
#define GTE 261
#define NEQ 262
#define DEQ 263
#define NUM 264
#define ID 265
#define NL 266
#define EQ 267
#define OP 268
#define BAND 269
#define BOR 270
#define BNOT 271
#define SEM 272
#define WHILE 273
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    2,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    3,    4,    4,    5,    5,
};
static const YYINT yylen[] = {                            2,
    5,    4,    4,    3,    3,    3,    2,    3,    3,    3,
    3,    3,    3,    1,    4,    3,    1,    1,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,   14,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    4,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    2,    0,    0,   19,   18,    0,   17,    0,    1,
    0,   15,    0,    0,    3,
};
static const YYINT yydgoto[] = {                          3,
    7,   34,   20,   37,   38,
};
static const YYINT yysindex[] = {                      -256,
  -40,  -40,    0,    0,  -40,  -40, -213, -199, -173,  -33,
  -40,  -40,  -40,  -40,  -40,  -40, -262,  -40,  -40, -259,
 -247,    0, -173, -173, -173, -173, -173, -173, -261, -173,
 -173,    0,  -40, -255,    0,    0, -266,    0, -186,    0,
 -261,    0, -253, -249,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,  -32,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,  -27,  -25,  -23,  -21,  -19,  -17,    0,  -15,
  -13,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0, -257,    0,
};
static const YYINT yygindex[] = {                         0,
   25,    0,  -30,  -20,    0,
};
#define YYTABLESIZE 253
static const YYINT yytable[] = {                          6,
    1,   41,   35,   36,   29,   42,   32,   22,    7,   33,
   40,   17,   45,   13,   16,    9,    2,   12,   41,    8,
   44,   11,    0,   10,    0,    5,    8,    6,    0,    9,
   10,    0,    0,    0,    0,   23,   24,   25,   26,   27,
   28,    0,   30,   31,   11,   12,   13,   14,   15,   16,
    0,   17,    0,    0,    0,   18,   19,   39,   11,   12,
   13,   14,   15,   16,    0,    0,   21,    0,    0,   18,
   19,   11,   12,   13,   14,   15,   16,    0,    0,   43,
    0,    0,   18,   19,   11,   12,   13,   14,   15,   16,
    0,    0,    0,    0,    0,   18,   19,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    4,   11,   12,   13,   14,   15,   16,
    5,    0,    7,    7,    0,   18,   19,   13,   13,    9,
    9,   12,   12,    8,    8,   11,   11,   10,   10,    5,
    5,    6,    6,
};
static const YYINT yycheck[] = {                         40,
  257,  268,  264,  265,  267,  272,  266,   41,   41,  257,
  266,  265,   43,   41,  272,   41,  273,   41,  268,   41,
   41,   41,   -1,   41,   -1,   41,    2,   41,   -1,    5,
    6,   -1,   -1,   -1,   -1,   11,   12,   13,   14,   15,
   16,   -1,   18,   19,  258,  259,  260,  261,  262,  263,
   -1,  265,   -1,   -1,   -1,  269,  270,   33,  258,  259,
  260,  261,  262,  263,   -1,   -1,  266,   -1,   -1,  269,
  270,  258,  259,  260,  261,  262,  263,   -1,   -1,  266,
   -1,   -1,  269,  270,  258,  259,  260,  261,  262,  263,
   -1,   -1,   -1,   -1,   -1,  269,  270,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,  264,  258,  259,  260,  261,  262,  263,
  271,   -1,  265,  266,   -1,  269,  270,  265,  266,  265,
  266,  265,  266,  265,  266,  265,  266,  265,  266,  265,
  266,  265,  266,
};
#define YYFINAL 3
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 273
#define YYUNDFTOKEN 281
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"IF","LT","LTE","GT",
"GTE","NEQ","DEQ","NUM","ID","NL","EQ","OP","BAND","BOR","BNOT","SEM","WHILE",0,
0,0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : while",
"while : WHILE B NL if NL",
"while : IF B st NL",
"if : IF B NL st",
"B : '(' B ')'",
"B : B BAND B",
"B : B BOR B",
"B : BNOT B",
"B : B GTE B",
"B : B LTE B",
"B : B DEQ B",
"B : B NEQ B",
"B : B GT B",
"B : B LT B",
"B : NUM",
"st : ID EQ expr SEM",
"expr : expr OP expr",
"expr : x",
"x : ID",
"x : NUM",

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
#line 55 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"

void main(int argc, char *argv[]) {
        printf("Enter the expression:\n");
        if(argc > 1){
                FILE *fp = fopen(argv[1],"r");
                if(fp) yyin = fp;
        }
        yyparse();
}
int yywrap(){}
int yyerror()
{
        printf("Not a Valid Input\n");
        return 1;
}
#line 272 "y.tab.c"

#if YYDEBUG
#include <stdio.h>	/* needed for printf */
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

    yym = 0;
    yyn = 0;
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
        yychar = YYLEX;
        if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
        if (yydebug)
        {
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
            printf("%sdebug: state %d, reading %d (%s)\n",
                    YYPREFIX, yystate, yychar, yys);
        }
#endif
    }
    if (((yyn = yysindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
#if YYDEBUG
        if (yydebug)
            printf("%sdebug: state %d, shifting to state %d\n",
                    YYPREFIX, yystate, yytable[yyn]);
#endif
        if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
        yystate = yytable[yyn];
        *++yystack.s_mark = yytable[yyn];
        *++yystack.l_mark = yylval;
        yychar = YYEMPTY;
        if (yyerrflag > 0)  --yyerrflag;
        goto yyloop;
    }
    if (((yyn = yyrindex[yystate]) != 0) && (yyn += yychar) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yychar)
    {
        yyn = yytable[yyn];
        goto yyreduce;
    }
    if (yyerrflag != 0) goto yyinrecovery;

    YYERROR_CALL("syntax error");

    goto yyerrlab; /* redundant goto avoids 'unused label' warning */
yyerrlab:
    ++yynerrs;

yyinrecovery:
    if (yyerrflag < 3)
    {
        yyerrflag = 3;
        for (;;)
        {
            if (((yyn = yysindex[*yystack.s_mark]) != 0) && (yyn += YYERRCODE) >= 0 &&
                    yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) YYERRCODE)
            {
#if YYDEBUG
                if (yydebug)
                    printf("%sdebug: state %d, error recovery shifting\
 to state %d\n", YYPREFIX, *yystack.s_mark, yytable[yyn]);
#endif
                if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
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
            if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
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
    if (yym > 0)
        yyval = yystack.l_mark[1-yym];
    else
        memset(&yyval, 0, sizeof yyval);

    switch (yyn)
    {
case 1:
#line 15 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{
	printf("Valid While Statement\n");
	if(yystack.l_mark[-3] == 1) printf("While Boolean Expression - TRUE\n");
	else printf("While Boolean Expression - FALSE\n");
	return 0;
}
break;
case 2:
#line 21 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{
	printf("Valid If Statement\n"); 
	if(yystack.l_mark[-2] == 1) printf("If Boolean Expression - TRUE\n");
	else printf("If Boolean Expression - FALSE\n");
	return 0;
}
break;
case 3:
#line 28 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ 
	printf("Valid If Statement\n"); 
	if(yystack.l_mark[-2] == 1) printf("If Boolean Expression - TRUE\n");
	else printf("If Boolean Expression - FALSE\n");
}
break;
case 4:
#line 34 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-1] == 1) yyval=1; else yyval=0;}
break;
case 5:
#line 35 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] == 1 && yystack.l_mark[0] == 1) yyval = 1; else yyval = 0; }
break;
case 6:
#line 36 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] == 1 || yystack.l_mark[0] == 1) yyval = 1; else yyval = 0;}
break;
case 7:
#line 37 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[0] == 1) yyval = 0; else yyval = 1; }
break;
case 8:
#line 38 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] >= yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
case 9:
#line 39 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] <= yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
case 10:
#line 40 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] == yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
case 11:
#line 41 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] != yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
case 12:
#line 42 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] > yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
case 13:
#line 43 "/home/s2020103540/CD_LAB/Week_11/spot/eval-bool/bool.y"
	{ if(yystack.l_mark[-2] < yystack.l_mark[0]) yyval = 1; else yyval = 0; }
break;
#line 537 "y.tab.c"
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
            yychar = YYLEX;
            if (yychar < 0) yychar = YYEOF;
#if YYDEBUG
            if (yydebug)
            {
                if ((yys = yyname[YYTRANSLATE(yychar)]) == NULL) yys = yyname[YYUNDFTOKEN];
                printf("%sdebug: state %d, reading %d (%s)\n",
                        YYPREFIX, YYFINAL, yychar, yys);
            }
#endif
        }
        if (yychar == YYEOF) goto yyaccept;
        goto yyloop;
    }
    if (((yyn = yygindex[yym]) != 0) && (yyn += yystate) >= 0 &&
            yyn <= YYTABLESIZE && yycheck[yyn] == (YYINT) yystate)
        yystate = yytable[yyn];
    else
        yystate = yydgoto[yym];
#if YYDEBUG
    if (yydebug)
        printf("%sdebug: after reduction, shifting from state %d \
to state %d\n", YYPREFIX, *yystack.s_mark, yystate);
#endif
    if (yystack.s_mark >= yystack.s_last && yygrowstack(&yystack) == YYENOMEM) goto yyoverflow;
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
