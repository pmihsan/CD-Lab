%option noyywrap

%{
	#include<stdio.h>	
	char str[50];
	int i = 0;
%}

%%
"abc" {
	for(int j=0;j<3;j++){
		str[i] = yytext[j] - 32;
		i++;
	}
}
. {
	str[i] = yytext[0];
	i++;
}

\n {
	str[i] = '\0';
	printf("%s\n",str);
	i = 0;
	strcpy(str, "");
	return 0;
}

%%

int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;
	}
	yylex();
	return 0;
}
