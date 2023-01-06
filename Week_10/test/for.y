%{
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yylex();
int yyerror();
int count=0;
// ST: S NL ST | S ST | ;
%}


%token MAIN FOR RELOP NUM ID NL EQ OP INC KEY SEM S END

%%
start: MAIN stmt END {printf("Code Verified\n"); exit(0);};
stmt:for_stmt NL {printf("Input accepted\n");printf("No of for statements nested :%d\n",count);};
for_stmt: FOR'('init cond incre')' '{' NL for_stmt NL '}' {count++;}
	| S ;
incre: x INC | x EQ x OP x;
init: KEY x EQ x SEM;
cond: x RELOP x SEM;
x: ID | NUM;
%%

void main(int argc, char* argv[]) {
printf("Enter the expression:\n");
	if(argc > 1){
		FILE *fp = fopen(argv[1],"r");
		if(fp) yyin = fp;
	}
yyparse();
}
int yywrap()
{}
int yyerror()
{
        printf("Not a Valid Input\n");
	return 0;
}
