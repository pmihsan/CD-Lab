%{
        #include<stdio.h>
        #include<stdlib.h>
	#include "y.tab.h"
	extern yylval;
%}

%%

(0|1)+ {yylval=atoi(yytext);return (NUM);}

"&"|"|"|"!"|"x"|"\n" {return yytext[0];}

%%
