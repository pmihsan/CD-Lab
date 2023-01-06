%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
%}

%%
. c++;
\n return 0;
%%


int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;	
	}
	yylex();
	printf("The number of characters in the file %s is %d\n",argv[1],c); 
	return 1;
}
