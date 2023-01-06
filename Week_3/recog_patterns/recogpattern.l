%option noyywrap

%{
	#include<stdio.h>
    int p1 = 0, p2 = 0, p3 = 0;
    int count = 0;
%}

%%
abb {
    p2++;
}

[a]* {
	p1++;
}

[a]*[b]+ {
    p3++;
}

[" "] ;

. count++;

[\n] return 0;

%%

int main(){	
	yylex();
	if( (p1 == yyleng) || (p1 == p2 == p3 == 0 && yyleng == 1) ){
        printf("String pattern {a*} found\n");
    }
    else if(p2 == yyleng){
        printf("String pattern {abb} found\n");
    }
    else if(p3 == yyleng){
        printf("String pattern {a*b+} found\n");
    }
    else{
        printf("Invalid String\n");
    }
	return 0;
}
