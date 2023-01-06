%option noyywrap
C [a-z]
%{
	#include<stdio.h>
	int c = 0, count = 0;
%}

%%
{C}*a{C}*e{C}*i{C}*o{C}*u{C}* {
    printf("The String which contain five vowels in order are %s\n",yytext);
    count++;
}

[" "] ;

. ;

[\n] return 0;

%%

int main(){	
	yylex();
	if(count > 0){
		printf("\nString has one or more ocuurences of five vowels in order\n");
	}
	else{
		printf("\nString has no ocuurences of five vowels in order\n");
	}
	return 0;
}
