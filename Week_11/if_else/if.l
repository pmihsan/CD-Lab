%{
#include<stdio.h>
#include<stdlib.h>
#include "y.tab.h"
extern int yyval;
%}


%%
[ \n\t] return 0;
"i" return IF;
"b" return EXPR;
"t" return THEN;
"e" return ELSE;
"a" return VAR;
. return yytext[0];
%%
