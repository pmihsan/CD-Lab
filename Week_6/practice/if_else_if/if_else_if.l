%option noyywrap
%{
        #include <stdio.h>
        #define SIZE 100

        int flag=0;
%}

%%

if[\(].*\n { char a[SIZE];
        char var[SIZE];
        bzero(a, SIZE);
        bzero(var, SIZE);
        int j=5, i=3, k=0;
        a[0]='c';
        a[1]='a';
        a[2]='s';
        a[3]='e';
        a[4]=' ';
        while(yytext[i]!='=') {
                var[k]=yytext[i];
                k++;
                i++;
        }
        i++;
        i++;
        printf("\nswitch(%s){ \n", var);
        while(yytext[i]!=')') {
                a[j]=yytext[i];
                i++;
                j++;
        }
        a[j]=':';
        j++;
        a[j]='\0';
        if(flag==0) {
                flag=1;
        }
        else {
                printf("\nbreak;\n");
        }
        printf("\n%s\n", a);
        }

else[ ]if.*\n { char a[SIZE];
        bzero(a, SIZE);
        int j=5, i=8;
        a[0]='c';
        a[1]='a';
        a[2]='s';
        a[3]='e';
        a[4]=' ';
        while(yytext[i]!='=') {
                i++;
        }
        i++;
        i++;
        while(yytext[i]!=')') {
                a[j]=yytext[i];
                i++;
                j++;
        }
        a[j]=':';
        j++;
        a[j]='\0';
        if(flag==1) {
                printf("\n\tbreak;\n");
        }
        printf("\n%s\n", a);
        }

else[ ]\{\n {printf("\n\tbreak;\n\ndefault: \n");}

[^\}].*\n printf("\n%s\n", yytext);

\}\n {}

%%

int main(int argc, char* argv[]) {
        if(argc>1) {
                FILE *fp = fopen(argv[1], "r");
                if(fp)
                        yyin = fp;
        }
        yylex();
        printf("\n}\n");
        return 0;
}
