%{
        #include<stdio.h>
        #include<stdlib.h>

        int yyerror();
        int yylex();
%}

%token  NUM NL
%left '+' '-'
%left '*' '/' '%'

%%

ST  : E NL {printf("Valid postfix expression.\nResult after evaluation: %d\n",$$); return 0;}
    | F NL {printf("Valid prefix expression.\nResult after evaluation: %d\n",$$);return 0;}
    | G NL {printf("Valid infix expression.\nResult after evaluation: %d\n",$$); return 0;}
    ;


E : E E '+' {$$=$1+$2;}
  | E E '-' {$$=$1-$2;}
  | E E '*' {$$=$1*$2;}
  | E E '/' {$$=$1/$2;}
  | E E '%' {$$=$1%$2;}
  | NUM
  ;

F : '+' F F  {$$=$2+$3;}
  | '-' F F  {$$=$2-$3;}
  | '*' F F  {$$=$2*$3;}
  | '/' F F  {$$=$2/$3;}
  | '%' F F  {$$=$2%$3;}
  | NUM
  ;

G : G '+' G  {$$=$1+$3;}
  | G '-' G  {$$=$1-$3;}
  | G '*' G  {$$=$1*$3;}
  | G '/' G  {$$=$1/$3;}
  | G '%' G  {$$=$1%$3;}
  | '(' G ')' {$$=$2;}
  | NUM
  ;


%%

int yyerror(char *msg)
{
printf("YYERROR: %s(NOT A VALID EXPRESSION)\n",msg);
return 0;
}

void main()
{
        printf("Enter your expression\n");
        yyparse();
}

int yywrap()
{}
