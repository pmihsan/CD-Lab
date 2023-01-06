%{
	#include <stdio.h>
	int chars = 0, lines = 0, words = 0;
%}

%%
[\n] {
	lines++;
}
[^ \t \n]+ {
	words++;
	chars += yyleng;
}
%%
int yywrap() {
	return 1;
}
int main() {
	yylex();
	printf("Lines: %d\nWords: %d\n Characters: %d\n", lines, words, chars);
}
