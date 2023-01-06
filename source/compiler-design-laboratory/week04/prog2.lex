%{
        #include <stdio.h>
%}
%option noyywrap
%%

ban(an)?(a)?    {
	printf("%s\n",yytext);
}

[a-zA-Z0-9]*ban(an)?(a)?[a-zA-Z0-9]*    {;}

.|\n    {;}
%%

int main() {
        yyin=fopen("testfile.txt","r");
        printf("Required Strings:\n");
        yylex();
        return 0;
}
