%option noyywrap

%{
	#include<stdio.h>
	int c = 0;
	int count = 0;
	int i = 0;
	char str1[50];
%}

%%
end return 0;
[aeiouAEIOU] {
	str1[i++] = *yytext;
	c++;
}
[a-zA-Z0-9] {
	str1[i++] = *yytext;	
}
[" "\n] {
	if(c >= 2){
		str1[i] = '\0';
		count++;
		printf("The string with atleast 2 vowels => %s\n",str1);
	}
	strcpy(str1, "");
	c = 0;	
	i = 0;
}
. ;
%%

int main(){
	yylex();
	printf("Total number of word with atleast two vowels is %d\n",count);
	return 0;
}
