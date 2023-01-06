%option noyywrap

%{
	#include<stdio.h>
	#include<string.h>
	int i = 0;
	char str[500];
	int k = 0;
	char str1[500];
%}

%%
. {
	str[i] = yytext[0];
	i++;
}
\n {
	for(int j=i-1;j>=0;j--){
		str1[k++] = str[j];
	}
	str1[k] = '\0';
	fprintf(yyout, "%s\n",str1);
	printf("%s\n",str1);
	strcpy(str,"");	
	strcpy(str1, "");
	i = k =  0;
}
%%


int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL) yyin = fp;	
	}
	FILE *fp_new = fopen("output.txt", "w+");
	if(fp_new != NULL) yyout = fp_new;	
	yylex();
	return 1;
}
