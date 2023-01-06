%{

#include<stdio.h>

#include<stdlib.h>

#include<string.h>

#include "y.tab.h"

%}



temp [A-Za-z][0-9]

var [A-Za-z_][A-Za-z0-9_]*

num [0-9]+



%%



{temp} { strcpy(yylval.exp, yytext); return TMP; }

{var} { strcpy(yylval.exp, yytext); return VAR; }

{num} { yylval.val = atoi(yytext); return NUM; }

[\t\n ] { }

. { return yytext[0]; }



%%



int yywrap(void) {

        return 1;

}
