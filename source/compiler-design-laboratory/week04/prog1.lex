%{
        #include <stdio.h>
%}
%option noyywrap
%%
[a-zA-Z0-9]+    {
	printf("%s\n",yytext);
}

.|\n    
%%

int main()	{
        yyin = fopen("testfile.txt","r");
        printf("Required Strings:\n");
        yylex();
        return 0;
}
