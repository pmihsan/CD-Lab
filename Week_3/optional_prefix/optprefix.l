%option noyywrap

%{
	#include<stdio.h>
    	int c = 0, count = 0;
%}

%%
[+|-]?[0-9]* {
	c++;
}

[" "] ;

. count++;

[\n] return 0;

%%

int main(){	
	yylex();
	if(c == 0 || count > 0){
        printf("String pattern no found\n");
    }
    else if(c == yyleng){
        printf("String matched with the given pattern\n");
    }
    else{
        printf("Invalid String\n");
    }
	return 0;
}
