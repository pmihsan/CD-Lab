%option noyywrap

%{
	#include<stdio.h>
%}

%%
d[a-z]*t {
	printf("String starts with 'd' and end with 't' => %s\n",yytext);	
}

[" "] ;

. ;

\n return 0;
%%

int main(){	
	yylex();
	return 0;
}
