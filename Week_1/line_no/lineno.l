%option noyywrap
%{
	int lineno = 0;
	int charno = 0;
%}

%%
\n	++lineno;
.	++charno;
end	return 0;
%%

int main(){
	yylex();
	printf("Number of line = %d\nNumber of characters = %d\n",lineno,charno);
	return 0;
}
