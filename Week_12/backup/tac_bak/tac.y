%{
#include <stdio.h>
int yylex(void);
void yyerror(char *msg);
char p = 'A' - 1;
char t;
%}
                                                                                                                                                                        
%union { char dval; }
%token NUM, ID, TYPE
%left '+' '-'
%left '*' '/'
%nonassoc UMINUS
%start S
%%
                                                                                                                                                                        
S: K '=' K '+' K { printf("\n t%d = t%d + t%d\n", $<dval>1-'A', $<dval>3-'A', $<dval>5-'A'); }
 | K '+' K { printf("\n addr = t%d + t%d\n", $<dval>1-'A', $<dval>3-'A'); }
 | K '=' K { printf("\n t%d = t%d\n", $<dval>1-'A', $<dval>3-'A'); } ;
K: E { $<dval>$ = $<dval>1; }
 | ID '[' F ']' { p++; printf("\n t%d = 8 * t%d\n", p-'A', $<dval>3-'A'); t=p++; printf("\nt%d = %c[t%d]\n", p-'A', $<dval>1, t-'A'); $<dval>$ = p;}
  | ID {p++;  printf("\nt%d = %c", p-'A', $<dval>1); $<dval>$ = p;}
 ;
F: E { $<dval>$ = p;}
  | F ']' '[' E { p++; printf("\nt%d = t%d * 25", p-'A', $<dval>1-'A'); t=p++; printf("\nt%d = t%d + t%d", p-'A', $<dval>4-'A', t-'A'); $<dval>$ = p;}
;
E: NUM {p++; printf("\nt%d = %d", p-'A', $<dval>1); $<dval>$ = p;}
  | ID {p++;  printf("\nt%d = %c", p-'A', $<dval>1); $<dval>$ = p;}
 | E '+' E {p++; printf("\nt%d = t%d + t%d", p-'A', $<dval>1-'A', $<dval>3-'A'); $<dval>$ = p;}
 | E '-' E {p++; printf("\nt%d = t%d - t%d", p-'A', $<dval>1-'A', $<dval>3-'A'); $<dval>$ = p;}
 | E '*' E {p++; printf("\nt%d = t%d * t%d", p-'A', $<dval>1-'A', $<dval>3-'A'); $<dval>$ = p;}
 | E '/' E {p++; printf("\nt%d = t%d / t%d", p-'A', $<dval>1-'A', $<dval>3-'A'); $<dval>$ = p;}
 | '(' E ')' { $<dval>$ = p; }
 | '-' E %prec UMINUS {p++; printf("\nt%d = -%c", p-'A', $<dval>2); $<dval>$ = p;}
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
