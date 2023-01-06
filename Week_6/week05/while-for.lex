%{
	#include <string.h>
	int init = 1, cond = 0, step = 0;
	char init_buffer[20], cond_buffer[20], step_buffer[20];
%}
%option noyywrap

%%
"while(" {
	init = 0;
	cond = 1;
}

"{" {
	cond = 0;
	step = 1;
}

")" {}
"}" {}
";" {}
. {
	if(init) 
		strcat(init_buffer, yytext);
	else if(cond)
		strcat(cond_buffer, yytext);
	else if(step)
		strcat(step_buffer, yytext);
	else {
		printf("ERROR!\n");
		return -1;
	}
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
	fprintf(fp, "for(%s; %s; %s)\t{\n}\n", init_buffer, cond_buffer, step_buffer);
	fclose(fp);
	return 0;
}
