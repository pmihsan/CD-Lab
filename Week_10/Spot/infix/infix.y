%{
        #include<stdio.h>
        #include<stdlib.h>
        #include<ctype.h>
%}

%token NUM
%left '+' '-'
%left '*' '/' '%'

%%

ST: E '\n' {printf("Valid expression.\nResult after evaluation: %d\n",$1); return 1;}


E : E '+' E {$$=$1+$3;}
  | E '-' E {$$=$1-$3;}
  | E '*' E {$$=$1*$3;}
  | E '/' E {$$=$1/$3;}
  | E '%' E {$$=$1%$3;}
  | '(' E ')' { $$=$2;}
  | NUM
  ;

%%


yyerror(char const *s){
        printf("yyerror: %s\n",s);
}

int yylex() {
        int c = getchar();
        if (isdigit(c)) {
                yylval=c-'0';
                return NUM;
        }
        return c;
}

int main(){
        while(1){
                yyparse();
        }
        return 1;
}
