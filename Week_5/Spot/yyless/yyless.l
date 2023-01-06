%option noyywrap
%{
#include<stdio.h>
%}
%%
[a-zA-Z ]+ {
	if(yyleng < 4){
		printf("Remaining Characters less than(4) => %s\n",yytext);
		return 0;
	}
	printf("\nInput Stream = %s\n",yytext);
	yyless(4);
	printf("\nThe word after yyless() = %s\n",yytext); 
}
. ;
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
