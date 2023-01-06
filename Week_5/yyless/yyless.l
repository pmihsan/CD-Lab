%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-z]+ {
	if(yyleng < 3){
		printf("Remaining Characters less than(3) => %s\n",yytext);
		return 0;
	}
	printf("\n Lower = %s\n",yytext);
	yyless(3);
	printf("\nThe word after yyless() = %s\n",yytext); 
}
[a-zA-Z]+ {
	printf("\nMixed letter is = %s\n",yytext);
}
\0 { return 0;}
%%
int main(int argc, char *argv[]) {
	if(argc > 1){
		FILE *fp = fopen(argv[1],"r");
		if(fp != NULL){
			yyin = fp;
		}
	}
	yylex();
	return 0;
}
