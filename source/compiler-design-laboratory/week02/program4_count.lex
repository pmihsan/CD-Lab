%{
	#include <stdio.h>
	int keys = 0, ids = 0, numbers = 0, unsigns = 0, delimits = 0, ops = 0, specials = 0,assigns = 0;
%}
%option noyywrap 

%%
if|else|for|while|then|switch|int|char|real {
	keys++;
}
[a-zA-Z_][a-zA-Z0-9_]* {
	ids++;
}
[0-9]+ {
	numbers++;
}
[0-9]+(.[0-9]+)?(E[+|-]?[0-9])?   {
	unsigns++;
}
[ \t\n] {
	delimits++;
}
:= {
	assigns++;
}
"+"|"-"|"*"|"/"|"%" {
	ops++;
}
"!"|"@"|"#"|"$"|"%"|"^"|"&"|"*"|"("|")"|"`" {
	specials++;
}

. printf("invalid");
%%
int main(int argc, char* argv[]) {
	freopen(argv[1], "r", stdin);
	yylex();
	printf("Keywords : %d\nIdentifiers : %d\nNumbers : %d\nUnsigned Numbers: %d\nDelimiters: %d\nAssignment operators: %d\n Operators: %d\nSpecial Characters: %d\n", keys, ids, numbers, unsigns, delimits, assigns, ops, specials);
	return 0;
}
