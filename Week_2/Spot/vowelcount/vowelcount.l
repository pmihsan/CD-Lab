%option noyywrap

%{
	#include<stdio.h>
	int v = 0;
	int c = 0;
%}

%%
[aeiouAEIOU] {
	v++;
}
[a-zA-z] {
	c++;
}

[" "] ;

[\n] return 0;

%%

int main(){	
	yylex();
	printf("Vowel Count = %d\n",v);
	printf("Consonant Count = %d\n",c);
	return 0;
}
