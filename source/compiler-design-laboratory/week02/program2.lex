%{
	#include<stdio.h>
	int lines = 0, chars = 0; 
%}
%option noyywrap
%%
\n      {
	++lines; 
}

.       {
	++chars;
}

end     {
	return 0; 
}
%%
int main(int argc, char **argv) {
	yylex(); 
	printf("Lines = %d, Characters = %d\n", lines, chars);
	return 0;
}
