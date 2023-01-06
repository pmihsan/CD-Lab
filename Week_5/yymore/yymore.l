%option noyywrap
%{
%}
%%
[a-z]+ {
printf("\nLowercase letter = "); ECHO;
printf("\nStart of 1st yymore\n");
yymore();
printf("\nEnd of 1st yymore\n");
}
[A-Z]+ {
printf("\nUppercase letter = "); ECHO;
printf("\nStart of 2nd yymore\n");
yymore();
printf("\nEnd of 2nd yymore\n");
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
