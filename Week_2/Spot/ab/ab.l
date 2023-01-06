%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
%}

%%
ab {
	c++;
}

[" "] ;
. ;
[\n] return 0;

%%

int main(){	
	yylex();
	if(c > 0){
		printf("String has one or more ocuurences of 'ab'\n");
	}
	else{
		printf("String has no ocuurences of 'ab'\n");
	}
//	printf("Total number of occurences of 'ab' is %d\n",c);
	return 0;
}
