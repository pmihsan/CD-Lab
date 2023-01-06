%{
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yylex();
int yyerror();
int count=0;
%}


%token IF ELSE RELOP NUM ID NL EQ OP BOP SEM

%%
if: IF B st NL { printf("Valid If Statement\n"); return 0;}

B : '('B')'
  | B BOP B
  | BOP B
  | x RELOP x
  ;

st: ID EQ expr SEM;

expr: expr OP expr 
    | x
    ;

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
        printf("Not a Valid Input\n");
        return 1;
}
