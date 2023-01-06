%{
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yyerror();
int count=0;
// ST: S NL ST | S ST | ;
%}


%token MAIN END FOR RELOP NUM ID NL EQ OP INC KEY SEM S

%%
start: MAIN stmt END {printf("Code Verified\n"); exit(0);};
stmt:for_stmt NL {printf("Input accepted\n");printf("Valid For Statement\n");};
for_stmt: FOR'('init cond incre')' '{' NL S NL '}' {count++;} ;
incre: x INC | x EQ x OP x;
init: KEY x EQ x SEM;
cond: x RELOP x SEM;
x: ID | NUM;
%%

void main(int argc, char *argv[]) {
	printf("Enter the expression:\n");
	if(argc > 1){ 
		FILE *fp = fopen(argv[1],"r");
		if(fp) yyin = fp;
	}
	yyparse();
}
int yywrap(){}
int yyerror()
{
        printf("Not a valid Input\n");
	return 1;
}
