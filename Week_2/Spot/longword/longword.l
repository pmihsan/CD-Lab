%option noyywrap

%{
	#include<stdio.h>
	int max = 0;
	int c = 0;
%}

%%
[a-zA-Z0-9] {
	c++;
}

[" "] {
	if(c > max){
		max = c;
	}
	c = 0;
}

[\n] return 0;

%%

int main(){
	yylex();
	printf("The length of the longest word is %d\n",max);
	return 0;
}
