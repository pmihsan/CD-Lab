%{
#include<stdio.h>
#include<ctype.h>
#include<stdlib.h>
extern FILE *yyin;
int yylex();
int yyerror();
%}


%token IF LT LTE GT GTE NEQ DEQ NUM ID NL EQ OP BAND BOR  BNOT SEM WHILE

%%

while: WHILE B NL if NL {
	printf("Valid While Statement\n");
	if($2 == 1) printf("While Boolean Expression - TRUE\n");
	else printf("While Boolean Expression - FALSE\n");
	return 0;
}
| IF B st NL {
	printf("Valid If Statement\n"); 
	if($2 == 1) printf("If Boolean Expression - TRUE\n");
	else printf("If Boolean Expression - FALSE\n");
	return 0;
}
;
if: IF B NL st { 
	printf("Valid If Statement\n"); 
	if($2 == 1) printf("If Boolean Expression - TRUE\n");
	else printf("If Boolean Expression - FALSE\n");
}

B : '('B')' { if($2 == 1) $$=1; else $$=0;}
  | B BAND B { if($1 == 1 && $3 == 1) $$ = 1; else $$ = 0; }
  | B BOR B { if($1 == 1 || $3 == 1) $$ = 1; else $$ = 0;}
  | BNOT B { if($2 == 1) $$ = 0; else $$ = 1; }
  | B GTE B { if($1 >= $3) $$ = 1; else $$ = 0; }
  | B LTE B { if($1 <= $3) $$ = 1; else $$ = 0; }
  | B DEQ B { if($1 == $3) $$ = 1; else $$ = 0; }
  | B NEQ B { if($1 != $3) $$ = 1; else $$ = 0; }
  | B GT B { if($1 > $3) $$ = 1; else $$ = 0; }
  | B LT B { if($1 < $3) $$ = 1; else $$ = 0; }
  | NUM 
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
