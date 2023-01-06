%{
#include <stdio.h>
int yylex(void);
void yyerror(char *msg);
char p = 'A' - 1;
char t;
%}

%union { char dval; }
%token NUM ID TYPE
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS
%start S
%%

S: K '+' K { printf("\naddr = %c + %c\n", $<dval>1, $<dval>3); }
 | K '=' K '+' K { printf("\n%c = %c + %c\n", $<dval>1, $<dval>3, $<dval>5); }
 ;
K: E| ID '[' F ']' { p++; printf("\n%c = 4 * %c\n", p, $<dval>3); t=p++; printf("\n%c = %c + %c\n", p, $<dval>1, t); $<dval>$ = p;}
 | ID {p++;  printf("\n%c = %c", p, $<dval>1); $<dval>$ = p;}
 ;
F: E { $<dval>$ = p;}
 | F ']' '[' E { p++; printf("\n%c = %c * 25", p, $<dval>1); t=p++; printf("\n%c = %c + %c", p, $<dval>4, t); $<dval>$ = p;}
;
E: NUM {p++; printf("\n%c = %d", p, $<dval>1); $<dval>$ = p;}
 | ID {p++;  printf("\n%c = %c", p, $<dval>1); $<dval>$ = p;}
 | E '+' E {p++; printf("\n%c = %c + %c", p, $<dval>1, $<dval>3); $<dval>$ = p;}
 | E '-' E {p++; printf("\n%c = %c - %c", p, $<dval>1, $<dval>3); $<dval>$ = p;}
 | E '*' E {p++; printf("\n%c = %c * %c", p, $<dval>1, $<dval>3); $<dval>$ = p;}
 | E '/' E {p++; printf("\n%c = %c / %c", p, $<dval>1, $<dval>3); $<dval>$ = p;}
 | '(' E ')' { $<dval>$ = p; }
 | '-' E %prec UMINUS {p++; printf("\n%c = -%c", p, $<dval>2); $<dval>$ = p;}
 ;
%%

void yyerror(char *msg){
        fprintf(stderr, "error %s", msg);
}

int main() {
printf("Enter expr : ");
yyparse();
printf("\n\n");
}
