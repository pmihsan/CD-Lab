%{
        #include <stdio.h>
%}
%option noyywrap
%%

[^abcABC]    {
	printf("%s",yytext);
}
.|\n    {;}
%%

int main()	{
        yyin = fopen("junkfile.txt","r");
        printf("Required Strings:\n");
        yylex();
	printf("\n");
        return 0;
}
