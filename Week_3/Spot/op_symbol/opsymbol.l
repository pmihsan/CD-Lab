%option noyywrap
%{
	#include<stdio.h>
%}

%%

[+-]|\*|\/|\% {
	printf("Symbol => Operator\n");
	printf("Token Name: ");
	switch(yytext[0]){
		case '+':
			printf("Addition\n");
			break;
		case '-':
			printf("Subtraction\n");
			break;
		case '*':
			printf("Multiplication\n");
			break;
		case '/':
			printf("Division\n");
			break;
		case '%':
			printf("Modulus\n");
			break;	
	}
	//printf("\n");		
}

. {
	printf("Not an Operator\n");
	return 0;
}

%%

int main(){
	yylex();

}
