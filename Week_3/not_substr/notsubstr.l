%option noyywrap

%{
	#include<stdio.h>
	int c = 0 , count = 0, i = 0;
%}

%%
[ab]*abb[ab]* {
    count++;
	c = 1;
}

[ab]* {
    printf("The String which do not contain 'abb' as substring is %s\n",yytext);
}

[" "] {
    if(c == 1){
        c = 0;
    }
}

. ;

[\n] return 0;

%%

int main(){	
	yylex();
	if(count > 0){
		printf("\nString has one or more ocuurences of 'abb'\n");
	}
	else{
		printf("\nString has no ocuurences of 'abb'\n");
	}
	return 0;
}
