%{
	#include<stdio.h>
	#include<stdlib.h>
	#include<ctype.h>
%}

%token NUM

%%

start: rexpr '\n' { if($1) printf("TRUE\n");
		   else printf("FALSE\n");
		   return 1;
		 }
	;

rexpr: rexpr '<' rexpr { $$ = ($1 < $3); }
	| rexpr '>' rexpr { $$ = ( $1 > $3); }
	| '!' rexpr { $$ = (!$2); }
	| rexpr '=' '=' rexpr { $$ = ($1 == $4); }
	| rexpr '!' '=' rexpr { $$ = ($1 != $4); }
	| '(' rexpr ')' { $$ = $2; }
	| NUM
	;

%%

yyerror(char const *s){ printf("YYERROR: %s\n",s); }

int yylex(){
	int c = getchar();
	if(isdigit(c)){
		yylval = c - '0';
		return NUM;
	}
	return c;
}

int main(int argc, char *argv[]){
	while(1){
		yyparse();
	}
	return 1;
}
