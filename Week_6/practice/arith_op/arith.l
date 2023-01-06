%option noyywrap

%{
        #include<stdio.h>
        #include<string.h>
        int i= 0;
        char str[50];
%}

%%

[a-z] {
	printf("%c",yytext[0]);
}

"+" {
//        strcat(str,"||");
//        i += 2;
	printf("||");
}

"*" {
//        strcat(str,"&&");
//        i += 2;
	printf("&&");
}


\n {
//        str[i] = '\0';
//        printf("String: %s\n",str);
//        strcpy(str,"");
//        i = 0;
	printf("\n");
}

%%

int main(int argc, char *argv[]){
        if(argc > 1){
                FILE *fp = fopen(argv[1],"r");
                if(fp != NULL) yyin = fp;
        }
        yylex();
//      printf("String after formatting arithmetic operator(+, *): %s\n",str);
        return 0;
}
