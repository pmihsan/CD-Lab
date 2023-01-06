%{
        #include<stdio.h>
        #include<stdlib.h>
        #include<ctype.h>
%}

%token digit letter
%%
start : letter s { printf("Valid identifier\n"); return 1;}
        | digit s { printf("Invalid identifier!\n"); return 1; }
;
s :     letter s
        | digit s
        |
        ;

%%

int yylex() {
        char c = getchar();
        if(c == '\n') return 0;
        if(isdigit(c)) {
                yylval = c - '0';
                return digit;
        } else if(isalpha(c)){
                yylval = c;
                //printf("Letter - %c\n",c);
                return letter;
        } else {
                printf("Not an identifier!\n");
                return -1;
        }
}
yyerror(char const *s) {
        printf("yyerror %s\n",s);
}
int main() {
        while(1) yyparse();
        return 1;
}
