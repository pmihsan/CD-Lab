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

#line 2 "one.y"
        #include<stdio.h>
        #include<stdlib.h>

        int yyerror();
        int yylex();
        int IdentifierCount = 0;
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

#define ID 257
#define UNUM 258
#define RNUM 259
#define SNUM 260
#define INT 261
#define FLOAT 262
#define DOUBLE 263
#define IF 264
#define ELSE 265
#define FOR 266
#define WHILE 267
#define DO 268
#define SWITCH 269
#define AUTO 270
#define CONST 271
#define SHORT 272
#define STRUCT 273
#define UNSIGNED 274
#define BREAK 275
#define CONTINUE 276
#define LONG 277
#define SIGNED 278
#define VOID 279
#define CASE 280
#define DEFAULT 281
#define ENUM 282
#define GOTO 283
#define REGISTER 284
#define SIZEOF 285
#define TYPEDEF 286
#define VOLATILE 287
#define CHAR 288
#define EXTERN 289
#define RETURN 290
#define STATIC 291
#define UNION 292
#define SEMICOLON 293
#define OPENBRACE 294
#define CLOSEBRACE 295
#define OPENPARAN 296
#define CLOSEPARAN 297
#define OPENSQUARE 298
#define CLOSESQUARE 299
#define SINGLEQ 300
#define DOUBLEQ 301
#define INCRE 302
#define DECRE 303
#define CONDOP 304
#define DELIMITER 305
#define EQUAL 306
#define BOR 307
#define BAND 308
#define NOT 309
#define XOR 310
#define PLUS 311
#define MINUS 312
#define ASTERISK 313
#define SLASH 314
#define MODULUS 315
#define TILDE 316
#define LEFTS 317
#define RIGHTS 318
#define ADDAS 319
#define SUBAS 320
#define MULAS 321
#define DIVAS 322
#define MODAS 323
#define LSAS 324
#define RSAS 325
#define ANDAS 326
#define ORAS 327
#define XORAS 328
#define LT 329
#define GT 330
#define LE 331
#define GE 332
#define EQ 333
#define NE 334
#define LAND 335
#define LOR 336
#define YYERRCODE 256
typedef short YYINT;
static const YYINT yylhs[] = {                           -1,
    0,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,
};
static const YYINT yylen[] = {                            2,
    1,    2,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,    1,    1,    1,    1,    1,    1,    1,    1,
    1,    1,
};
static const YYINT yydefred[] = {                         0,
    3,    4,    6,    5,    7,    8,    9,   26,   27,   35,
   36,   37,   38,   10,   11,   12,   13,   14,   30,   31,
   15,   16,   17,   28,   29,   18,   32,   19,   34,   20,
   21,   22,   23,   33,   24,   25,   45,   39,   40,   41,
   42,   43,   44,   46,   47,   49,   50,   71,   82,   48,
   51,   52,   53,   54,   56,   57,   58,   59,   60,   55,
   72,   73,   61,   62,   63,   64,   65,   66,   67,   68,
   70,   69,   74,   75,   76,   77,   78,   79,   80,   81,
    0,    0,    0,
};
static const YYINT yydgoto[] = {                         81,
   83,
};
static const YYINT yysindex[] = {                      -257,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0, -257, -257,
};
static const YYINT yyrindex[] = {                         0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,    0,    0,    0,    0,    0,    0,    0,    0,    0,
    0,   80,   81,
};
static const YYINT yygindex[] = {                         0,
   82,
};
#define YYTABLESIZE 82
static const YYINT yytable[] = {                          1,
    2,    3,    4,    5,    6,    7,    8,    9,   10,   11,
   12,   13,   14,   15,   16,   17,   18,   19,   20,   21,
   22,   23,   24,   25,   26,   27,   28,   29,   30,   31,
   32,   33,   34,   35,   36,   37,   38,   39,   40,   41,
   42,   43,   44,   45,   46,   47,   48,   49,   50,   51,
   52,   53,   54,   55,   56,   57,   58,   59,   60,   61,
   62,   63,   64,   65,   66,   67,   68,   69,   70,   71,
   72,   73,   74,   75,   76,   77,   78,   79,   80,    1,
    2,   82,
};
static const YYINT yycheck[] = {                        257,
  258,  259,  260,  261,  262,  263,  264,  265,  266,  267,
  268,  269,  270,  271,  272,  273,  274,  275,  276,  277,
  278,  279,  280,  281,  282,  283,  284,  285,  286,  287,
  288,  289,  290,  291,  292,  293,  294,  295,  296,  297,
  298,  299,  300,  301,  302,  303,  304,  305,  306,  307,
  308,  309,  310,  311,  312,  313,  314,  315,  316,  317,
  318,  319,  320,  321,  322,  323,  324,  325,  326,  327,
  328,  329,  330,  331,  332,  333,  334,  335,  336,    0,
    0,    0,
};
#define YYFINAL 81
#ifndef YYDEBUG
#define YYDEBUG 0
#endif
#define YYMAXTOKEN 336
#define YYUNDFTOKEN 340
#define YYTRANSLATE(a) ((a) > YYMAXTOKEN ? YYUNDFTOKEN : (a))
#if YYDEBUG
static const char *const yyname[] = {

"end-of-file",0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,
0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,"ID","UNUM","RNUM","SNUM","INT",
"FLOAT","DOUBLE","IF","ELSE","FOR","WHILE","DO","SWITCH","AUTO","CONST","SHORT",
"STRUCT","UNSIGNED","BREAK","CONTINUE","LONG","SIGNED","VOID","CASE","DEFAULT",
"ENUM","GOTO","REGISTER","SIZEOF","TYPEDEF","VOLATILE","CHAR","EXTERN","RETURN",
"STATIC","UNION","SEMICOLON","OPENBRACE","CLOSEBRACE","OPENPARAN","CLOSEPARAN",
"OPENSQUARE","CLOSESQUARE","SINGLEQ","DOUBLEQ","INCRE","DECRE","CONDOP",
"DELIMITER","EQUAL","BOR","BAND","NOT","XOR","PLUS","MINUS","ASTERISK","SLASH",
"MODULUS","TILDE","LEFTS","RIGHTS","ADDAS","SUBAS","MULAS","DIVAS","MODAS",
"LSAS","RSAS","ANDAS","ORAS","XORAS","LT","GT","LE","GE","EQ","NE","LAND","LOR",
0,0,0,"illegal-symbol",
};
static const char *const yyrule[] = {
"$accept : S",
"S : ST",
"ST : ST ST",
"ST : ID",
"ST : UNUM",
"ST : SNUM",
"ST : RNUM",
"ST : INT",
"ST : FLOAT",
"ST : DOUBLE",
"ST : AUTO",
"ST : CONST",
"ST : SHORT",
"ST : STRUCT",
"ST : UNSIGNED",
"ST : LONG",
"ST : SIGNED",
"ST : VOID",
"ST : ENUM",
"ST : REGISTER",
"ST : TYPEDEF",
"ST : VOLATILE",
"ST : CHAR",
"ST : EXTERN",
"ST : STATIC",
"ST : UNION",
"ST : IF",
"ST : ELSE",
"ST : CASE",
"ST : DEFAULT",
"ST : BREAK",
"ST : CONTINUE",
"ST : GOTO",
"ST : RETURN",
"ST : SIZEOF",
"ST : FOR",
"ST : WHILE",
"ST : DO",
"ST : SWITCH",
"ST : OPENBRACE",
"ST : CLOSEBRACE",
"ST : OPENPARAN",
"ST : CLOSEPARAN",
"ST : OPENSQUARE",
"ST : CLOSESQUARE",
"ST : SEMICOLON",
"ST : SINGLEQ",
"ST : DOUBLEQ",
"ST : EQUAL",
"ST : INCRE",
"ST : DECRE",
"ST : BOR",
"ST : BAND",
"ST : NOT",
"ST : XOR",
"ST : TILDE",
"ST : PLUS",
"ST : MINUS",
"ST : ASTERISK",
"ST : SLASH",
"ST : MODULUS",
"ST : ADDAS",
"ST : SUBAS",
"ST : MULAS",
"ST : DIVAS",
"ST : MODAS",
"ST : LSAS",
"ST : RSAS",
"ST : ANDAS",
"ST : XORAS",
"ST : ORAS",
"ST : CONDOP",
"ST : LEFTS",
"ST : RIGHTS",
"ST : LT",
"ST : GT",
"ST : LE",
"ST : GE",
"ST : EQ",
"ST : NE",
"ST : LAND",
"ST : LOR",
"ST : DELIMITER",

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
#line 118 "one.y"

//#include "lex.yy.c"

int yyerror()
{}

void main()
{
        printf("Enter the statement: \n\n");
        yyparse();
}

int yywrap()
{}
#line 396 "y.tab.c"

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
#line 18 "one.y"
	{exit(0);}
break;
case 3:
#line 21 "one.y"
	{IdentifierCount++;printf(" is the Symbol \nType = Identifier\nSymbol table entry = %d\n\n",IdentifierCount);}
break;
case 4:
#line 22 "one.y"
	{IdentifierCount++;printf(" is the Symbol \nType = Unsigned numeric identifier\nSymbol table entry = %d\n\n",IdentifierCount);}
break;
case 5:
#line 23 "one.y"
	{IdentifierCount++;printf(" is the Symbol \nType = Signed numeric identifier\nSymbol table entry = %d\n\n",IdentifierCount);}
break;
case 6:
#line 24 "one.y"
	{IdentifierCount++;printf(" is the Symbol \nType = Rational numeric identifier\nSymbol table entry = %d\n\n",IdentifierCount);}
break;
case 7:
#line 26 "one.y"
	{printf(" is the Symbol\nType = Keyword defining datatype\nDatatype = int\n\n");}
break;
case 8:
#line 27 "one.y"
	{printf(" is the symbol\nType = Keyword defining datatype\nDatatype = float\n\n");}
break;
case 9:
#line 28 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = double\n\n");}
break;
case 10:
#line 29 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = auto\n\n");}
break;
case 11:
#line 30 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = const\n\n");}
break;
case 12:
#line 31 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = short\n\n");}
break;
case 13:
#line 32 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = struct\n\n");}
break;
case 14:
#line 33 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = unsigned\n\n");}
break;
case 15:
#line 34 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = long\n\n");}
break;
case 16:
#line 35 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = signed\n\n");}
break;
case 17:
#line 36 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = void\n\n");}
break;
case 18:
#line 37 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = enum\n\n");}
break;
case 19:
#line 38 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = register\n\n");}
break;
case 20:
#line 39 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = typedef\n\n");}
break;
case 21:
#line 40 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = volatile\n\n");}
break;
case 22:
#line 41 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = char\n\n");}
break;
case 23:
#line 42 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = extern\n\n");}
break;
case 24:
#line 43 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = static\n\n");}
break;
case 25:
#line 44 "one.y"
	{printf(" is the symbol\nType = keyword defining datatype\nDatatype = union\n\n");}
break;
case 26:
#line 46 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = if\n\n");}
break;
case 27:
#line 47 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = else\n\n");}
break;
case 28:
#line 48 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = case\n\n");}
break;
case 29:
#line 49 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = default\n\n");}
break;
case 30:
#line 50 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = break\n\n");}
break;
case 31:
#line 51 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = continue\n\n");}
break;
case 32:
#line 52 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = goto\n\n");}
break;
case 33:
#line 53 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = return\n\n");}
break;
case 34:
#line 54 "one.y"
	{printf(" is the symbol\nType = keyword defining condition\nCondition Type = sizeof\n\n");}
break;
case 35:
#line 56 "one.y"
	{printf(" is the symbol\nType = Keyword for defining loop\nLoop Type = for\n\n");}
break;
case 36:
#line 57 "one.y"
	{printf(" is the symbol\nType = keyword for defining loop\nLoop Type = while\n\n");}
break;
case 37:
#line 58 "one.y"
	{printf(" is the symbol\nType = Keyword for defining loop\nLoop Type = do\n\n");}
break;
case 38:
#line 59 "one.y"
	{printf(" is the symbol\nType = Keyword for defining loop\nLoop Type = Switch\n\n");}
break;
case 39:
#line 61 "one.y"
	{printf(" is the symbol\nType = Open Brace\nnBracket Type = {\n\n");}
break;
case 40:
#line 62 "one.y"
	{printf(" is the symbol\nType = Close Brace\nBracket Type = }\n\n");}
break;
case 41:
#line 63 "one.y"
	{printf(" is the symbol\nType = Open paranthesis\nBracket Type = (\n\n");}
break;
case 42:
#line 64 "one.y"
	{printf(" is the symbol\nType = Close paranthesis\nBracket Type = )\n\n");}
break;
case 43:
#line 65 "one.y"
	{printf(" is the symbol\nType = open square bracket\nBracket Type = [\n\n");}
break;
case 44:
#line 66 "one.y"
	{printf(" is the symbol\nType = Close square bracket\nBracket Type = ]\n\n");}
break;
case 45:
#line 68 "one.y"
	{printf(" is the symbol\nType = Semicolon\nValue = ;\n\n");}
break;
case 46:
#line 69 "one.y"
	{printf(" is the symbol\nType = Single quotation\nValue = '\n\n");}
break;
case 47:
#line 70 "one.y"
	{printf(" is the symbol\nType = double quotation\nValue = \"\n\n");}
break;
case 48:
#line 72 "one.y"
	{printf(" is the symbol\nType = Assignment operator\nOperator Value is =\n\n");}
break;
case 49:
#line 74 "one.y"
	{printf(" is the symbol\nType = Increment operator\nValue = ++\n\n");}
break;
case 50:
#line 75 "one.y"
	{printf(" is the symbol\nType = decrement operator\nValue = --\n\n");}
break;
case 51:
#line 77 "one.y"
	{printf(" is the symbol\nType = bitwise operator\nValue = |\n\n");}
break;
case 52:
#line 78 "one.y"
	{printf(" is the symbol\nType = bitwise operator\nValue = &\n\n");}
break;
case 53:
#line 79 "one.y"
	{printf(" is the symbol\nType = bitwise operator\nValue = !\n\n");}
break;
case 54:
#line 80 "one.y"
	{printf(" is the symbol\nType = bitwise operator\nValue = ^\n\n");}
break;
case 55:
#line 81 "one.y"
	{printf(" is the symbol\nType = bitwise operator\nValue = ~\n\n");}
break;
case 56:
#line 83 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = +\n\n");}
break;
case 57:
#line 84 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = -\n\n");}
break;
case 58:
#line 85 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = *\n\n");}
break;
case 59:
#line 86 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = /\n\n");}
break;
case 60:
#line 87 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = %\n\n");}
break;
case 61:
#line 88 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = +=\n\n");}
break;
case 62:
#line 89 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = -=\n\n");}
break;
case 63:
#line 90 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = *=\n\n");}
break;
case 64:
#line 91 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = /=\n\n");}
break;
case 65:
#line 92 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = %=\n\n");}
break;
case 66:
#line 93 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = <<=\n\n");}
break;
case 67:
#line 94 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = >>=\n\n");}
break;
case 68:
#line 95 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = &=\n\n");}
break;
case 69:
#line 96 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = ^=\n\n");}
break;
case 70:
#line 97 "one.y"
	{printf(" is the symbol\nType = arithmetic operator\nValue = |=\n\n");}
break;
case 71:
#line 99 "one.y"
	{printf(" is the symbol\nType = conditional operator\nValue = ?:\n\n");}
break;
case 72:
#line 101 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = <<\n\n");}
break;
case 73:
#line 102 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = >>\n\n");}
break;
case 74:
#line 103 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = <\n\n");}
break;
case 75:
#line 104 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = >\n\n");}
break;
case 76:
#line 105 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = <=\n\n");}
break;
case 77:
#line 106 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = >=\n\n");}
break;
case 78:
#line 107 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue is ==\n\n");}
break;
case 79:
#line 108 "one.y"
	{printf(" is the symbol\nType = Relational operator\nValue = !=\n\n");}
break;
case 80:
#line 110 "one.y"
	{printf(" is the symbol\nType = logical operator\nValue = &&\n\n");}
break;
case 81:
#line 111 "one.y"
	{printf(" is the symbol\nType = logical operator\nValue = ||\n\n");}
break;
case 82:
#line 113 "one.y"
	{;}
break;
#line 919 "y.tab.c"
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
