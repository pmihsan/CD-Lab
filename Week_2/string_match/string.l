%option noyywrap

%{
	#include<stdio.h>
	#include<string.h>
	int f = 1;
	int l;
%}

%%
end return 0;
[a-zA-Z0-9]* {
	char *s = yytext;
	char s1[50];
	printf("Enter a string\n");
	fgets(s1, 50, stdin);
	s1[strlen(s1) - 1] = '\0';
	if(strcmp(s1, s) == 0){
		f = 0;
	}
	l = yyleng;										
	}
%%

int main(){
	yylex();
	if(f == 0){
		printf("Strings Match\nString Length - %d\n",l);
	}
	else{
		printf("Strings Don't Match\n");
	}
	return 0;
}
