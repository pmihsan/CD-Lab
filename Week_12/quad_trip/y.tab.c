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

#line 2 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
void triple();
void qudraple();
char AddToTable(char ,char, char);

int ind=0;/*count number of lines*/
char temp = '1';/*for t1,t2,t3.....*/
struct incod
{
char opd1;
char opd2;
char opr;
};
#ifdef YYSTYPE
#undef  YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#endif
#ifndef YYSTYPE_IS_DECLARED
#define YYSTYPE_IS_DECLARED 1
#line 19 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
typedef union
{
 char sym;
} YYSTYPE;
#endif /* !YYSTYPE_IS_DECLARED */
#line 49 "y.tab.c"

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

#define LETTER 257
#define NUMBER 258
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    0,    0,    1,    1,    1,    1,    1,    1,    1,
    1,
};
static const YYINT yylen[] = {                            2,
    4,    7,    2,    3,    3,    3,    3,    3,    1,    1,
    2,
};
static const YYINT yydefred[] = {                         0,
    0,    9,    0,    0,    0,    0,    0,    0,   10,   11,
    0,    0,    0,    0,    0,    3,    0,    0,    8,    0,
    0,    0,    5,    1,    0,    0,    0,    2,
};
static const YYINT yydgoto[] = {                          5,
    6,
};
static const YYINT yysindex[] = {                       -40,
  -60,    0,  -38,  -38,    0,   -1,  -38, -253,    0,    0,
   25,  -38,  -38,  -38,  -38,    0,    5,  -82,    0,  -39,
  -30,  -30,    0,    0,  -45,  -38,   12,    0,
};
static const YYINT yyrindex[] = {                         0,
   18,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,  -29,
  -19,   -8,    0,    0,    0,    0,    0,    0,
};
static const YYINT yygindex[] = {                         0,
    6,
};
#define YYTABLESIZE 220
static const YYINT yytable[] = {                          4,
    7,    4,   13,   18,    3,   15,    3,   14,   10,   11,
   25,    4,   17,    4,   15,   26,    0,   20,   21,   22,
   23,    6,    6,    6,    0,    0,    0,    6,    0,    4,
    8,   27,    7,    7,    7,    0,    0,    0,    7,    6,
   13,   12,    0,   15,    0,   14,   13,   12,    0,   15,
    7,   14,    0,   13,   12,    0,   15,   16,   14,   10,
   10,    0,   10,   24,   10,   19,   13,   12,    0,   15,
   28,   14,    0,    0,    0,    0,   10,    0,    0,    0,
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
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    1,    2,    9,    2,
};
static const YYINT yycheck[] = {                         40,
   61,   40,   42,  257,   45,   45,   45,   47,    3,    4,
   93,   41,    7,   43,   45,   61,   -1,   12,   13,   14,
   15,   41,   42,   43,   -1,   -1,   -1,   47,   -1,   59,
   91,   26,   41,   42,   43,   -1,   -1,   -1,   47,   59,
   42,   43,   -1,   45,   -1,   47,   42,   43,   -1,   45,
   59,   47,   -1,   42,   43,   -1,   45,   59,   47,   42,
   43,   -1,   45,   59,   47,   41,   42,   43,   -1,   45,
   59,   47,   -1,   -1,   -1,   -1,   59,   -1,   -1,   -1,
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
   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,   -1,
   -1,   -1,   -1,   -1,   -1,   -1,  257,  258,  257,  258,
};
#define YYFINAL 5
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 258
#define YYUNDFTOKEN 262
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,"'('","')'","'*'","'+'",0,"'-'",0,"'/'",0,0,0,0,0,0,0,0,0,0,0,"';'",
0,"'='",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"'['",0,"']'",
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,"LETTER","NUMBER",0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : statement",
"statement : LETTER '=' expr ';'",
"statement : LETTER '[' LETTER ']' '=' expr ';'",
"statement : expr ';'",
"expr : expr '+' expr",
"expr : expr '-' expr",
"expr : expr '*' expr",
"expr : expr '/' expr",
"expr : '(' expr ')'",
"expr : NUMBER",
"expr : LETTER",
"expr : '-' expr",

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
#line 48 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"

yyerror(char *s)
{
 printf("%s",s);
 exit(0);
}

struct incod code[20];

char AddToTable(char opd1,char opd2,char opr)
{
 code[ind].opd1=opd1;
 code[ind].opd2=opd2;
 code[ind].opr=opr;
 ind++;
 return temp++;
}


void quadraple()
{
 int cnt = 0;
 char temp = '1';
 printf("\n\n\t QUADRAPLE CODE\n\n");
 while(cnt<ind)
 {
  printf(" %c\t",code[cnt].opr);
  if(code[cnt].opr == '=')
  {
   if(isalpha(code[cnt].opd2))
    printf(" %c\t \t",code[cnt].opd2);
   else if(code[cnt].opd2 >='1' && code[cnt].opd2 <='9')
    printf("t%c\t \t",code[cnt].opd2);

    printf(" %c\n",code[cnt].opd1);
   cnt++;
   continue;
  }
  if(isalpha(code[cnt].opd1))
    printf(" %c\t",code[cnt].opd1);
  else if(code[cnt].opd1 >='1' && code[cnt].opd1 <='9')
    printf("t%c\t",code[cnt].opd1);

  if(isalpha(code[cnt].opd2))
    printf(" %c\t",code[cnt].opd2);
  else if(code[cnt].opd2 >='1' && code[cnt].opd2 <='9')
    printf("t%c\t",code[cnt].opd2);
  else  printf("  %c",code[cnt].opd2);

  printf("t%c\n",temp++);

  cnt++;
 }
        printf("\n\n");
}

void triple()
{
 int cnt=0;
 char temp='1';
 printf("\n\n\t TRIPLE CODE\n\n");
  while(cnt<ind)
 {
  printf("(%c) \t",temp);
  printf(" %c\t",code[cnt].opr);
  if(code[cnt].opr == '=')
  {
   if(isalpha(code[cnt].opd2))
    printf(" %c \t \t",code[cnt].opd2);
   else if(code[cnt].opd2 >='1' && code[cnt].opd2 <='9')
    printf("(%c)\n",code[cnt].opd2);
   cnt++;
   temp++;
   continue;
  }
  if(isalpha(code[cnt].opd1))
    printf(" %c \t",code[cnt].opd1);
  else if(code[cnt].opd1 >='1' && code[cnt].opd1 <='9')
    printf("(%c)\t",code[cnt].opd1);

  if(isalpha(code[cnt].opd2))
    printf(" %c \n",code[cnt].opd2);
  else if(code[cnt].opd2 >='1' && code[cnt].opd2 <='9')
    printf("(%c)\n",code[cnt].opd2);
  else  printf("  %c\n",code[cnt].opd2);

  cnt++;
  temp++;
 }
        printf("\n\n");
}

main()
{
printf("\n Enter the Expression : ");
yyparse();
quadraple();
triple();
}
#line 333 "y.tab.c"

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
#line 31 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{AddToTable((char)yystack.l_mark[-3].sym,(char)yystack.l_mark[-1].sym,'=');}
break;
case 2:
#line 32 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{AddToTable((char)yystack.l_mark[-6].sym,(char)yystack.l_mark[-4].sym,'+');AddToTable((char)yystack.l_mark[-6].sym,(char)yystack.l_mark[-1].sym,'=');}
break;
case 4:
#line 37 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = AddToTable((char)yystack.l_mark[-2].sym,(char)yystack.l_mark[0].sym,'+');}
break;
case 5:
#line 38 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = AddToTable((char)yystack.l_mark[-2].sym,(char)yystack.l_mark[0].sym,'-');}
break;
case 6:
#line 39 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = AddToTable((char)yystack.l_mark[-2].sym,(char)yystack.l_mark[0].sym,'*');}
break;
case 7:
#line 40 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = AddToTable((char)yystack.l_mark[-2].sym,(char)yystack.l_mark[0].sym,'/');}
break;
case 8:
#line 41 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = (char)yystack.l_mark[-1].sym;}
break;
case 9:
#line 42 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = (char)yystack.l_mark[0].sym;}
break;
case 10:
#line 43 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = (char)yystack.l_mark[0].sym;}
break;
case 11:
#line 44 "/home/s2020103540/CD_LAB/Week_12/quad_trip/quad_trip.y"
	{yyval.sym = AddToTable((char)yystack.l_mark[0].sym,(char)'\t','-');}
break;
#line 572 "y.tab.c"
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
