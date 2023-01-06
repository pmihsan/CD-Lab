%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
extern int yylval;
%}

alpha [A-Za-z]
digit [0-9]

%%
[ \t] ;
"if" return IF;
"while" return WHILE;
";" return SEM;
{digit}+ { yylval = atoi(yytext); return NUM; }
{alpha}({alpha}|{digit})*|{alpha}+ return ID;
"<=" return LTE;
">=" return GTE;
"<" return LT;
">" return GT;
"==" { return DEQ;}
"!=" return NEQ;
"=" return EQ;
"+"|"-" return OP;
"&&" return BAND;
"||" return BAND;
"!" return BNOT;
"\n" return NL;
. return(yytext[0]);

%%
