%option noyywrap

%{
	int l = 1;
	int c = 0;
%}

%%

"print"|"def"|"return"|"if"|"else" {
	printf("Token Keyword --> %s\n",yytext);
	c += yyleng;
	/*
	if(strcmp(yytext,"print"): c+=5; break;
	case "def": c+=3; break;
	case "return": c+=6; break;
	case "if": c+=2; break;
	case "else": c+=4; break;
	}	*/
}

"x" {
	printf("Token identifier --> %s\n",yytext);c++;
}

[0-9]+ {
	printf("Token Constant --> %s\n",yytext);c++;
}

":" {
	printf("Token seperator --> colon(%s)\n",yytext);c++;
}
"("|")" {
	printf("Token Parenthesis --> special operator(%s)\n",yytext);c++;
}
"+" {
	printf("Token Operator --> add(%s)\n",yytext);c++;
}
"*" {
	printf("Token Operator --> multiply(%s)\n",yytext);c++;
}
">=" {
	printf("Token Operator --> Greater than or equal to(%s)\n",yytext);c+=2;
}

" " {
	printf("Token Seperator --> space( )\n");c++;
}

\n {	
	printf("Line %d has %d characters\n\n",l,c);
	l++;
	c = 0;
}

%%

int main(int argc, char *argv[]){	
	if(argc >  1){	
		FILE *fp = fopen(argv[1], "r");
		if(fp != NULL){
			yyin = fp;
		}
	}
	yylex();
	return 0;
}
