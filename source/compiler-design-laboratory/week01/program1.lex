%{
	//Any string start with an alphabet is a token in this program 
	#include <stdio.h>
	int count = 0;
%}

digit [0-9]
letter [a-zA-Z]

%%
{letter}({letter}|{digit})* {
	count++;
}
%%
int yywrap(void) {
	return 1;
}

int main(void) {
	yylex();
	printf("Number of Identifiers: %d\n", count);
	return 0;
}
