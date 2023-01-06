%{
#include <stdio.h>
#include <stdlib.h>
#include "y.tab.h"
%}

%option noyywrap

%%
[0-9]+ {yylval.dval = atoi(yytext); return NUM; }
[a-zA-Z]+ {yylval.dval = yytext[0]; return ID; }
[\t];
\n return 0;
. {return yytext[0];}
%%
