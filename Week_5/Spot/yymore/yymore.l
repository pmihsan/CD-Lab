%option noyywrap
%{
	char startL = '*', endL = '*';
	char startU = '*', endU = '*';
	int c = 0;
%}
%%
[a-z]+ {
	if(c == 0){
		startL = yytext[0];
		endL = yytext[yyleng - 1];
	}
	else{
		startL = yytext[c];
		endL = yytext[yyleng - 1];
	}
	printf("\nLowercase letter = "); ECHO;
	//printf("\nStart of 1st yymore\n");
	yymore();
	//printf("\nEnd of 1st yymore\n");
	c = yyleng;
}
[A-Z]+ {
	if(c == 0){
		startU = yytext[0];
		endU = yytext[yyleng - 1];
	}
	else{
		startU = yytext[c];
		endU = yytext[yyleng - 1];
	}
	printf("\nUppercase letter = "); ECHO;
	//printf("\nStart of 2nd yymore\n");
	yymore();
	//printf("\nEnd of 2nd yymore\n");
	c = yyleng;
}
[" "] {
	if(startL == '*'){
		printf("No Lowercase Letter in the word\n");
		printf("Start UpperCase = %c\n",startU);
		printf("End UpperCase = %c\n\n",endU);
	}
	else if(startU == '*'){
		printf("No UpperCase Letter\n");
		printf("Start LowerCase = %c\n",startL);
		printf("End LowerCase = %c\n\n",endL);
	}
	else{
		printf("Start UpperCase = %c\n",startU);
		printf("End UpperCase = %c\n\n",endU);
		printf("Start LowerCase = %c\n",startL);
		printf("End LowerCase = %c\n\n",endL);
	}
	startL = '*', endL = '*';
	startU = '*', endU = '*';
 	c = 0;
}
\n {
	return 0;
}
%%
void main(int argc, char *argv[])
{
	if(argc > 1){
		FILE *fp = fopen(argv[1],"r");
		if(fp != NULL) yyin = fp;
	}
	yylex();
}
