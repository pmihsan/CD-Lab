%{

typedef char* string;
#include <stdio.h>
#define YYSTYPE string
int yylex();

%}

%token IDATA FDATA CDATA DATATYPE NAME EQ DATA SEMICOLON IDT FDT CDT COMMA

%%

file: record '\n' file
| record '\n'
;

record: IDT NAME EQ DATA SEMICOLON  { printf("%s %s %s %s %s is a valid C statement", $1, $2, $3, $4, $5); }
        | FDT NAME EQ FDATA SEMICOLON { printf("%s %s %s %s %s is a valid C statement", $1, $2, $3, $4, $5); }
        | FDT NAME EQ DATA SEMICOLON { printf("%s %s %s %s %s is a valid C statement", $1, $2, $3, $4, $5); }
        | CDT NAME EQ CDATA SEMICOLON { printf("%s %s %s %s %s is a valid C statement", $1, $2, $3, $4, $5); }
        | IDT declare { printf("It is a valid C statement", $1, $2); }
        | FDT declare  { printf("It is a valid C statement", $1, $2); }
;
declare:
        NAME COMMA declare
        | NAME SEMICOLON
;

%%

int main()
{
        yyparse();
        return 0;
}

int yyerror(char *msg)
{
        printf("Not a valid C statement : %s \n", msg);
}
