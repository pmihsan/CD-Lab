%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
extern int yyval;
%}

alpha [A-Za-z]
digit [0-9]

%%
[ \t] ;
"if" return IF;
";" return SEM;
{digit}+ return NUM;
{alpha}({alpha}|{digit})*|{alpha}+ return ID;
"<="|">="|"=="|"!="|"<"|">" return RELOP;
"=" return EQ;
"+"|"-" return OP;
"&&"|"||"|"!" return BOP;
"\n" return NL;
. return(yytext[0]);

%%
