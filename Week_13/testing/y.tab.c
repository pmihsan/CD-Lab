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

#line 1 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
                                                                                                                                                                      
#include<stdio.h>                                                                                                                                                       
#include<stdlib.h>                                                                                                                                                      
#include<string.h>                                                                                                                                                      
int yylex(void);                                                                                                                                                        
void yyerror(char *msg);                                                                                                                                                
extern FILE *yyin;                                                                                                                                                      
int l = 0;                                                                                                                                                              
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 11 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
typedef union {                                                                                                                                                                
        char exp[25];                                                                                                                                                   
        int val;                                                                                                                                                        
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 42 "y.tab.c"

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

#define TMP 257
#define VAR 258
#define NUM 259
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    2,
};
static const YYINT yylen[] = {                            2,
    1,    2,    6,    6,    6,    6,    6,    6,    6,    6,
    6,    6,    6,    6,    6,    6,    6,    6,    0,    1,
};
static const YYINT yydefred[] = {                         0,
    0,    0,    0,    0,    0,    0,   20,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    6,    4,   10,    8,   18,   16,   14,   12,
    5,    3,    9,    7,   17,   15,   13,   11,
};
static const YYINT yydgoto[] = {                          2,
    5,    8,
};
static const YYINT yysindex[] = {                      -247,
  -49,    0, -247, -237, -247,  -34,    0,  -28, -235, -233,
 -231, -229, -227, -225, -223, -221,  -43,  -41,  -21,  -20,
  -19,  -18,  -17,  -16,  -15,  -14,  -13,  -12,  -11,  -10,
   -8,   -7,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yyrindex[] = {                        50,
    0,    0,   53,    0,   54,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
   55,   -9,
};
#define YYTABLESIZE 55
static const YYINT yytable[] = {                         18,
   20,   22,   24,   26,   28,   30,   32,   11,    9,    1,
   10,    4,   12,   15,   13,   33,   14,   34,   16,    6,
    7,   17,    7,   19,    7,   21,    7,   23,    7,   25,
    7,   27,    7,   29,    7,   31,    7,   35,   36,   37,
   38,   39,   40,   41,   42,   43,   44,   45,   46,   19,
   47,   48,    1,    2,    3,
};
static const YYINT yycheck[] = {                          9,
   10,   11,   12,   13,   14,   15,   16,   42,   43,  257,
   45,   61,   47,   42,   43,   59,   45,   59,   47,  257,
  258,  257,  258,  257,  258,  257,  258,  257,  258,  257,
  258,  257,  258,  257,  258,  257,  258,   59,   59,   59,
   59,   59,   59,   59,   59,   59,   59,   59,   59,    0,
   59,   59,    0,    0,    0,
};
#define YYFINAL 2
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 259
#define YYUNDFTOKEN 264
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,"'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",0,"'='",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"TMP",
"VAR","NUM",0,0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : pgm",
"pgm : S",
"S : S S",
"S : TMP '=' E '+' E ';'",
"S : TMP '=' TMP '+' E ';'",
"S : TMP '=' E '+' TMP ';'",
"S : TMP '=' TMP '+' TMP ';'",
"S : TMP '=' E '-' E ';'",
"S : TMP '=' TMP '-' E ';'",
"S : TMP '=' E '-' TMP ';'",
"S : TMP '=' TMP '-' TMP ';'",
"S : TMP '=' E '/' E ';'",
"S : TMP '=' TMP '/' E ';'",
"S : TMP '=' E '/' TMP ';'",
"S : TMP '=' TMP '/' TMP ';'",
"S : TMP '=' E '*' E ';'",
"S : TMP '=' TMP '*' E ';'",
"S : TMP '=' E '*' TMP ';'",
"S : TMP '=' TMP '*' TMP ';'",
"S :",
"E : VAR",

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
#line 60 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
                                                                                                                                                                      
                                                                                                                                                                        
void yyerror(char *msg) {                                                                                                                                               
        fprintf(stderr, "Error in parsing: %s\n", msg);                                                                                                                 
}                                                                                                                                                                       
                                                                                                                                                                        
int main(int argc, char *argv[]) {                                                                                                                                      
        yyin = fopen(argv[1], "r");                                                                                                                                     
        yyparse();                                                                                                                                                      
        return 1;                                                                                                                                                       
}
#line 222 "y.tab.c"

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
#line 21 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n COMPLETED!!! \n\n"); }
break;
case 3:
#line 24 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                        
                          printf("\n LD R%d, %s", l+2, yystack.l_mark[-1].exp);                                                                                                        
                          printf("\n ADD %s, R%d, R%d",yystack.l_mark[-5].exp, l+1, l+2); l+=2; }
break;
case 4:
#line 27 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-1].exp);                                                                                                      
                            printf("\n ADD %s, %s, R%d",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, l+1); l+=1; }
break;
case 5:
#line 29 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                      
                            printf("\n ADD %s, R%d, %s",yystack.l_mark[-5].exp, l+1, yystack.l_mark[-1].exp); l+=1; }
break;
case 6:
#line 31 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n ADD %s, %s, %s",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, yystack.l_mark[-1].exp); }
break;
case 7:
#line 32 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                        
                          printf("\n LD R%d, %s", l+2, yystack.l_mark[-1].exp);                                                                                                        
                          printf("\n SUB %s, R%d, R%d",yystack.l_mark[-5].exp, l+1, l+2); l+=2; }
break;
case 8:
#line 35 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-1].exp);                                                                                                      
                            printf("\n SUB %s, %s, R%d",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, l+1); l+=1; }
break;
case 9:
#line 37 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                      
                            printf("\n SUB %s, R%d, %s",yystack.l_mark[-5].exp, l+1, yystack.l_mark[-1].exp); l+=1; }
break;
case 10:
#line 39 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n SUB %s, %s, %s",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, yystack.l_mark[-1].exp); }
break;
case 11:
#line 40 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                       
                          printf("\n LD R%d, %s", l+2, yystack.l_mark[-1].exp);                                                                                                        
                          printf("\n DIV %s, R%d, R%d",yystack.l_mark[-5].exp, l+1, l+2); l+=2; }
break;
case 12:
#line 43 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-1].exp);                                                                                                      
                            printf("\n DIV %s, %s, R%d",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, l+1); l+=1; }
break;
case 13:
#line 45 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                      
                            printf("\n DIV %s, R%d, %s",yystack.l_mark[-5].exp, l+1, yystack.l_mark[-1].exp); l+=1; }
break;
case 14:
#line 47 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n DIV %s, %s, %s",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, yystack.l_mark[-1].exp); }
break;
case 15:
#line 48 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                       
                          printf("\n LD R%d, %s", l+2, yystack.l_mark[-1].exp);                                                                                                        
                          printf("\n MULT %s, R%d, R%d",yystack.l_mark[-5].exp, l+1, l+2); l+=2; }
break;
case 16:
#line 51 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-1].exp);                                                                                                      
                            printf("\n MULT %s, %s, R%d",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, l+1); l+=1; }
break;
case 17:
#line 53 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n LD R%d, %s", l+1, yystack.l_mark[-3].exp);                                                                                                      
                            printf("\n MULT %s, R%d, %s",yystack.l_mark[-5].exp, l+1, yystack.l_mark[-1].exp); l+=1; }
break;
case 18:
#line 55 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ printf("\n MULT %s, %s, %s",yystack.l_mark[-5].exp, yystack.l_mark[-3].exp, yystack.l_mark[-1].exp); }
break;
case 20:
#line 58 "/home/s2020103540/CD_LAB/Week_13/testing/asm.y"
	{ strcpy(yyval.exp, yystack.l_mark[0].exp); }
break;
#line 509 "y.tab.c"
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
