%option noyywrap

%{
	#include<stdio.h>
	int c = 0, count = 0;
	int rep = 0;
    int arr[10];
%}

%%
[0-9]* {
    //printf("%s\n",yytext);
    for(int i=0;i<10;i++){
        arr[i] = 0;
    }
    for(int i=0;i<yyleng;i++){
        arr[yytext[i] - '0']++;
    }
    for(int i=0;i<10;i++){
        if(arr[i] > 1){
            rep++;
        }
    }
    if(rep <= 1){
        printf("The String which contain atmost one repeated digit is %s\n",yytext);
        count++;
        rep = 0;
    }
}

[" "] ;

. ;

[\n] return 0;

%%

int main(){	
	yylex();
	if(count > 0){
		printf("\nString has one or more ocuurences of repeated digit\n");
	}
	else{
		printf("\nString has no ocuurences of repeated digit\n");
	}
	return 0;
}
