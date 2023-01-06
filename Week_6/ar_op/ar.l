%option noyywrap

%{
        #include<stdio.h>
        #include<string.h>
        int i= 0;
        char str[50];
%}

%%

[a-z] {
	str[i++] = yytext[0];
}

"+" {
        str[i++] = '|';
        str[i++] = '|';
}

"*" {
        str[i++] = '&';
        str[i++] = '&';
}

. {
	str[i++] = yytext[0];
}

\n {
        str[i] = '\0';
        printf("String: %s\n",str);
        fprintf(yyout,"String: %s\n",str);
        strcpy(str,"");
        i = 0;
}

%%

int main(int argc, char *argv[]){
        if(argc > 1){
                FILE *fp = fopen(argv[1],"r");
                if(fp != NULL) yyin = fp;
        }
	FILE *fp2 = fopen("output.txt","w");
	yyout = fp2;
        yylex();
//      printf("String after formatting arithmetic operator(+, *): %s\n",str);
        return 0;
}
