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

#line 2 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
#include <stdio.h>
int yylex(void);
void yyerror(char *msg);
char p = 'A' - 1;
char t;
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 9 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
typedef union { char dval; } YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 36 "y.tab.c"

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

#define NUM 257
#define ID 258
#define TYPE 259
#define UMINUS 260
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    1,    1,    1,    3,    3,    3,
    2,    2,    2,    2,    2,    2,    2,    2,
};
static const YYINT yylen[] = {                            2,
    5,    3,    3,    1,    4,    1,    1,    1,    4,    4,
    1,    1,    3,    3,    3,    3,    3,    2,
};
static const YYINT yydefred[] = {                         0,
   11,    0,    0,    0,    0,    0,    0,    0,    0,   12,
   18,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,   17,    2,    0,    0,    0,   15,   16,    0,
    0,   10,    0,    0,    0,    0,    1,
};
static const YYINT yydgoto[] = {                          5,
    6,    7,    8,
};
static const YYINT yysindex[] = {                       -40,
    0,  -75,  -38,  -38,    0,  -30,   16,  -68,  -36,    0,
    0,   -9,  -40,  -40,  -38,  -38,  -38,  -38,  -73,  -62,
  -28,  -63,    0,    0,   -8,  -20,  -20,    0,    0,  -38,
  -38,    0,  -73,  -40,   16,  -28,    0,
};
static const YYINT yyrindex[] = {                         0,
    0,    1,    0,    0,    0,    0,    3,   10,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -19,
    0,    0,    0,    0,   37,    6,   11,    0,    0,    0,
    0,    0,   12,    0,    8,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    7,   72,   30,
};
#define YYTABLESIZE 222
static const YYINT yytable[] = {                          4,
    6,    4,    4,    4,    3,   13,    3,    9,    3,    7,
   14,    5,   13,   17,   15,    9,   16,   30,   18,   24,
   25,   17,   12,   12,   19,   12,   18,   12,   31,   33,
   14,   23,   17,   15,   34,   16,    3,   18,   22,    0,
   37,    0,   12,    6,    0,   12,   13,   12,   13,    0,
   13,   14,    7,   14,    5,   14,    0,   17,   15,    0,
   16,    6,   18,    4,   32,    0,   13,    0,    9,    0,
    7,   14,    5,   12,   11,   12,    0,    0,    0,    0,
   21,    0,    0,    0,    0,    0,   26,   27,   28,   29,
    0,    0,    0,   12,    0,    8,    0,    0,   13,    0,
    9,   35,   36,   14,    0,    0,    0,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    1,    2,    1,   10,
    1,   20,
};
static const YYINT yycheck[] = {                         40,
    0,   40,    0,   40,   45,    0,   45,    0,   45,    0,
    0,    0,   43,   42,   43,   91,   45,   91,   47,   13,
   14,   42,   42,   43,   93,   45,   47,   47,   91,   93,
   61,   41,   42,   43,   43,   45,    0,   47,    9,   -1,
   34,   -1,   42,   43,   -1,   45,   41,   47,   43,   -1,
   45,   41,   43,   43,   43,   45,   -1,   42,   43,   -1,
   45,   61,   47,   61,   93,   -1,   61,   -1,   61,   -1,
   61,   61,   61,   93,    3,    4,   -1,   -1,   -1,   -1,
    9,   -1,   -1,   -1,   -1,   -1,   15,   16,   17,   18,
   -1,   -1,   -1,   93,   -1,   93,   -1,   -1,   93,   -1,
   93,   30,   31,   93,   -1,   -1,   -1,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  257,  258,
  257,  258,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 260
#define YYUNDFTOKEN 266
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,0,0,
"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,"NUM","ID","TYPE","UMINUS",0,0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : K '=' K '+' K",
"S : K '+' K",
"S : K '=' K",
"K : E",
"K : ID '[' F ']'",
"K : ID",
"K : F",
"F : E",
"F : F ']' '[' E",
"F : ID '[' E ']'",
"E : NUM",
"E : ID",
"E : E '+' E",
"E : E '-' E",
"E : E '*' E",
"E : E '/' E",
"E : '(' E ')'",
"E : '-' E",

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
#line 50 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
                                                                                                                                                                        
void yyerror(char *msg){
        fprintf(stderr, "error %s", msg);
}
int main() {
printf("Enter expr : ");
yyparse();
printf("\n\n");
}
#line 244 "y.tab.c"

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
#line 17 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ printf("\nt%d = t%d + t%d", yystack.l_mark[-4].dval-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); }
break;
case 2:
#line 18 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ p++;printf("\nt%d= t%d + t%d",p-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); }
break;
case 3:
#line 19 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ printf("\nt%d = t%d", yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); }
break;
case 4:
#line 22 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ yyval.dval = yystack.l_mark[0].dval; }
break;
case 5:
#line 23 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ p++; printf("\nt%d = t%d + t%d", p-'A', yystack.l_mark[-1].dval-'A'-1, yystack.l_mark[-1].dval-'A'); t=p++; 
		printf("\nt%d = %c[t%d]", p-'A', yystack.l_mark[-3].dval, t-'A'); yyval.dval = p;
	}
break;
case 6:
#line 26 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++;  printf("\nt%d = %c", p-'A', yystack.l_mark[0].dval); yyval.dval = p;}
break;
case 8:
#line 30 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ yyval.dval = p;}
break;
case 9:
#line 31 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ p++; printf("\nt%d = t%d * 12", p-'A', yystack.l_mark[-3].dval-'A'); t=p++; 
		/*printf("\nt%d = t%d + t%d", p-'A', $<dval>4-'A', t-'A'); $<dval>$ = p;*/
		printf("\nt%d = t%d * 4", p-'A', yystack.l_mark[0].dval-'A'); yyval.dval = p;
	}
break;
case 10:
#line 35 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ p++; printf("\nt%d = %c * 8",p-'A',yystack.l_mark[-1].dval);t=p++; 
		printf("\nt%d = %c[t%d]",p-'A',yystack.l_mark[-3].dval, t-'A'); yyval.dval=p;
	}
break;
case 11:
#line 40 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = %d", p-'A', yystack.l_mark[0].dval); yyval.dval = p;}
break;
case 12:
#line 41 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++;  printf("\nt%d = %c", p-'A', yystack.l_mark[0].dval); yyval.dval = p;}
break;
case 13:
#line 42 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = t%d + t%d", p-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); yyval.dval = p;}
break;
case 14:
#line 43 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = t%d - t%d", p-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); yyval.dval = p;}
break;
case 15:
#line 44 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = t%d * t%d", p-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); yyval.dval = p;}
break;
case 16:
#line 45 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = t%d / t%d", p-'A', yystack.l_mark[-2].dval-'A', yystack.l_mark[0].dval-'A'); yyval.dval = p;}
break;
case 17:
#line 46 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{ yyval.dval = p; }
break;
case 18:
#line 47 "/home/s2020103540/CD_LAB/Week_12/tac-test/tac.y"
	{p++; printf("\nt%d = -%c", p-'A', yystack.l_mark[0].dval); yyval.dval = p;}
break;
#line 518 "y.tab.c"
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
