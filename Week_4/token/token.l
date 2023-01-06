%option noyywrap

%{
	#include<stdio.h>
	int flag = 0;
%}

%%
[a-zA-Z_][a-zA-Z0-9_]* {
	flag = 1;
	printf("Token(Identifier) --> %s\n", yytext);
}
"++"[abc] {
	flag = 1;
	printf("Token(pre Inc) --> %s\n",yytext);
}
[abc]"++"|[abc]" ++" {
	flag = 1;
	printf("Token(post Inc) --> %s\n",yytext);
}
"=" {
	flag = 1;
	printf("Token(assignment) --> %s\n",yytext);
}
"+" {
	flag = 1;
	printf("Token(operator) --> %s\n",yytext);
}

" " {
	flag = 1;
	printf("Token(Seperator) --> space\n");
}
\n ;
. ;
%%

int main(int argc, char *argv[]){
	if(argv > 1){
		FILE *fp = fopen(argv[1] , "r");
		if(fp != NULL){
			yyin = fp;
		}
	}
	yylex();
	if(flag == 0){	
		printf("No Token Found\n");
	}
	return 0;
}
