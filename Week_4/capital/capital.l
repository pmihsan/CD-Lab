%option noyywrap

%{
	#include<stdio.h>
	int c = 0, i = 1;
%}

%%
[A-Z] {c++; printf("Line - %d\tCapital - %c\n",i,yytext[0]);}
. ;
\n i++;
%%


int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;	
	}
	yylex();
	printf("The number of capital letters in the file is %d\n",c); 
	return 1;
}
