%option noyywrap
%{
	#include<stdio.h>
%}

%%
if|else|while|int|switch|for|char {printf("Keyword");}

[_]*[a-z]+([a-zA-Z]*[_]*[0-9]*)*|[_]+[0-9]* {printf("Identifier");}

[0-9]*	{printf("Number");}

[0-9]+(.[0-9]+)?(E[+|-]?[0-9])? {printf("Unsigned Integer");}


.*	{printf("Invalid");} 
%%

int main(){
	yylex();
	return 0;
}
