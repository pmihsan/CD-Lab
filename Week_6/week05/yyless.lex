%option noyywrap
%{
	#include<stdio.h>
%}
%%
[a-z]+ {
	printf("\n Lower = %s\n", yytext);
	yyless(4);
	printf("\nThe word after yyless() = %s", yytext);
}

[a-zA-Z]+ {
	printf("\nMixed letter is = ");  ECHO;
}
%%
int main(int argc, char* argv[])	{

	if(argc > 1) {
		FILE* fp = fopen(argv[1], "r");
		if(fp) 
			yyin = fp;
	}

	yylex();
	return 0;
}
