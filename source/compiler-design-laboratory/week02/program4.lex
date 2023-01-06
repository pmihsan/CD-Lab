%{
	#include <stdio.h>
%}
%option noyywrap 

%%
if|else|for|while|then|switch|int|char|real {
	printf("keyword ");
}
[a-zA-Z_][a-zA-Z0-9_]* {
	printf("identifier ");
}
[0-9]+ {
	printf("number ");
}
[0-9]+(.[0-9]+)?(E[+|-]?[0-9])?   {
	printf("unsigned number ");
}
[ \t\n] {
	printf("delimiter \n");
}
:= {
	printf("assignment operator ");
}
"+"|"-"|"*"|"/" {
	printf("operator ");
}
"!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"("|")"|"`" {
	printf("special character ");
}

. printf("invalid");
%%
int main() {
	yylex();
	return 0;
}
