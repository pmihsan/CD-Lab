%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
	int count = 0;
%}

%%
[a-z] {
	c++;
}

[" "] ;

.  count++;

[\n] return 0;

%%

int main(){	
	yylex();
	if(c > 0){
		printf("String has lower case letters\n");
	}
	else if(count == 0){
		printf("EMPTY STRING\n");
	}
	else{
		printf("String has no lower case letters\n");
	}
	return 0;
}
