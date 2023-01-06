%option noyywrap

%{
        #include<stdio.h>
%}

%%

if\(.*\) {
        int i = 2;
        printf("switch(%c){\n",yytext[++i]);
        while(yytext[i] != '=') i++;
        i+=2;
        printf("   case %c: ",yytext[++i]);
}

else[ ]if\(.*\) {
        int i = 8;
        while(yytext[i] != '=') i++;
        i+=2;
        printf("   case %c: ",yytext[++i]);
}

"{\n.*" {
        int i = 2;
        printf("{\n");
        while(yytext[i] != '}'){
                printf("%c",yytext[i]);
        }
}

"else" {
        printf("   default: ");
}

. {
        if(yytext[0] == '}') printf("\tbreak;\n   }");
        else printf("%c",yytext[0]);
}

\n { printf("\n");}
%%`

int main(int argc, char *argv[]){
        if(argc > 1){
                FILE *fp = fopen(argv[1],"r");
                if(fp) yyin = fp;
        }
        yylex();
        printf("}\n");
        return 0;
}
