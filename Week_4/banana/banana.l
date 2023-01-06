%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
	int i = 1;
%}

%%
b(an){1,2}(a){0,1} {
	printf("Line - %d\n",i);
	c = 1;
	}
. ;
\n i++;
%%


int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;	
	}
	yylex();
	if(c == 1) printf("Pattern b(an){1-2}(a){0-1} found\n");
	else printf("Pattern not found\n");
	return 1;
}
