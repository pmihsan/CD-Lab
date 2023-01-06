%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
%}

%%
[a-zA-Z0-9] {c++; printf("%c",yytext[0]);}
" " ;
. ;
\n {
	printf("\n");
}
%%


int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;	
	}
	yylex();
	if(c > 0){
		printf("String contains %d alpha numeric characters\n",c);
	}
	else if(c == 0){
		printf("String has no alpha numeric characters\n");
	}
	return 1;
}
