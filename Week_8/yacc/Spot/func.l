%option noyywrap
%{
	#include<stdio.h>
	int name = 1, arg = 0, ret = 0, stat = 0;
	int macro = 0;
	char name_b[200], arg_b[200], ret_b[200], stat_b[200];
	
%}

%%

"int "|"char " {
	macro = 1;
	if(name == 0) arg = 1;
}

" ({" { stat = 1;}

"})" { stat = 0;}

"(" { name = 0;  if(stat) strcat(stat_b, yytext); if(!stat) arg = 1;}

")" { arg = 0; if(stat) strcat(stat_b, yytext); }

"return " { ret = 1; stat = 0;}

"}" { if(ret == 1) ret = 0; }

"{" { if(arg == 0 && stat == 0) stat = 1; }

[\t\n] {}

"#define " {}

. {
	if(name == 1) strcat(name_b,yytext);
	else if(arg == 1) strcat(arg_b,yytext);
	else if(stat == 1) strcat(stat_b,yytext);
	else if(ret == 1) strcat(ret_b,yytext);
	else {
		printf("Error\n"); return -1;
	}
} 

%%

int main(int argc, char *argv[]){
	if(argc > 1){
		FILE *fp = fopen(argv[1],"r");
		if(fp) yyin = fp;
	}
	yylex();
	FILE *out = fopen("out.txt","w");
	if(macro == 1){
		printf("#define %s(%s) ({%s %s})\n",name_b,arg_b,stat_b,ret_b);
		fprintf(out,"#define %s(%s) ({%s %s})\n",name_b,arg_b,stat_b,ret_b);
	}
	else{
		/*printf("%s\n",name_b);
		printf("%s\n",arg_b);
		printf("%s\n",stat_b);*/
		printf("int %s(%s){\n%s\nreturn %s\n}\n",name_b,arg_b,stat_b,ret_b);
		fprintf(out,"int %s(%s){\n%s\nreturn %s\n}\n",name_b,arg_b,stat_b,ret_b);
	}
	return 0;
}
