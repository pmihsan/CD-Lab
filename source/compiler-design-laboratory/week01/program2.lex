%{
	#include <stdio.h>
%}
%option noyywrap

%%
[0-9]+ {
	printf("Valid UnSigned Integer");
}
(-[0-9]*) {
	printf("Invalid UnSigned Integer");
}
. ;
%%
int main() {
	yylex();
	return 0;
}
