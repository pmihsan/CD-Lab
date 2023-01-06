%option noyywrap

%{
	#include<stdio.h>
%}

%%
[a-z]*def[a-z]* {
	printf("String which contains def => %s\n",yytext);	
}

[" "] ;

. ;

\n return 0;
%%

int main(){	
	yylex();
	return 0;
}
