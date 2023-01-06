%{
	#include <string.h>
	int nflag = 0, init = 0, cond = 0, step = 0;
	char initbuff[20], condbuff[20], stepbuff[20], buffer[200];
	char ninitbuff[20], ncondbuff[20], nstepbuff[20], nbuffer[200];
%}
%option noyywrap
%%
"for(" {
	if(nflag == 0) nflag = 1;
	else nflag = 0;
	init = 1;
}
";" {
	if(init == 1) {
		init = 0;
		cond = 1;	
	}
	else if(cond == 1) {
		cond = 0;
		step = 1;
	}
	else REJECT;
}
"}" {
	if(nflag == 0) nflag = 1;
}
")" {
	step = 0;
}
 "{" {}
. {
	if(nflag == 1 && init == 1) 
		strcat(initbuff, yytext);
	else if(nflag == 0 && init == 1)
		strcat(ninitbuff, yytext);
	else if(nflag == 1 && cond == 1)
		strcat(condbuff, yytext);
	else if(nflag == 0 && cond == 1)
		strcat(ncondbuff, yytext);
	else if(nflag == 1 && step == 1)
		strcat(stepbuff, yytext);
	else if(nflag == 0 && step == 1)
		strcat(nstepbuff, yytext);
	else if(nflag == 1)	
		strcat(buffer, yytext);
	else 
		strcat(nbuffer, yytext);
}

%%
int main(int argc, char* argv[]) {
	if(argc > 1) {
		FILE* fp = fopen(argv[1], "r");
		if(fp)
			yyin = fp;
	}

	yylex();

	FILE* fp = fopen("output.txt", "w");
	fprintf(fp, "%s;\nwhile(%s) {\n\t%s;\n\twhile(%s) {\n%s\n\t\t%s;\n\t}\n%s\n\t%s;\n}", initbuff, condbuff, ninitbuff, ncondbuff, nbuffer, nstepbuff, buffer, stepbuff);
	fclose(fp);
	return 0;
} 
