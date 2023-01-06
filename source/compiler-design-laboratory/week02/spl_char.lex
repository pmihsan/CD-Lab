%{
	#include <stdio.h>
%}
%option noyywrap

%%
"+"|"-"|"*"|"/"|"%"|"++"|"--" {
	printf("arithmetic operator ");
}

"=="|"!="|"<"|">"|"<="|">="  { 
	printf("relational operators ");
}

"&&"|"||"|"!" {
	printf("logical operator ");
}

"&"|"|"|"^"|"~"|"<<"|">>" {
	printf("bit-wise operator ");
}

"="|"+="|"-="|"*="|"/="|"%="|"<<="|">>="|"&="|"^="|"|=" {
	printf("assignment operators ");
}

"#"|"@"|"$"|"_"|"£"|"{"|"}"|"["|"]"|"("|")"|":"|";"|"."|"," {
	printf("special character ");
}

if|else|while|int|switch|for|char {
	printf("keyword ");
}

[a-z]([a-z]|[0-9])*  {
	printf("identifier ");
}

[0-9]* {
	printf("number "); 
}

[0-9]+(.[0-9]+)?(E[+|-]?[0-9])?  {
	printf("unsigned number ");
}
[\n\t] {
	printf("delimiter \n");
}
.* { printf ("invalid "); }
%%
int main() {
	yylex();
	return 0;
}
