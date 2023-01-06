%option noyywrap
%{
	int validInt = 0;
	int validFloat = 0;
%}

%%
^[-+]?[0-9]*$ validInt++;
^[-+]?[0-9]*[.][0-9]+$ validFloat++;
\n	return 0;
%%

int main(){
	yylex();
	if(validInt != 0){
		printf("Valid Integer Number\n");
	}
	else if(validFloat != 0){
		printf("Valid Float Number\n");
	}
	else{
		printf("Not a valid integer or float number\n");
	}
	return 0;
}
