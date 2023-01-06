%{
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yylex();
int yyerror();
int count=0;
%}


%token IF ELSE THEN EXPR VAR

%%
ST: stmt {printf("Input Accepted\n");exit(0);} ;
/*
if_stmt: IF EXPR THEN if_stmt
       | IF EXPR THEN if_stmt ELSE if_stmt
       | VAR ;
*/
stmt: IF EXPR THEN stmt | IF EXPR THEN stmt ELSE stmt | VAR ;
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
