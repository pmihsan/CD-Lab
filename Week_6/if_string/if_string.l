%option noyywrap

%{
        #include<stdio.h>
%}

%%

if\(.*\) {
        int j = 3;
        char var[20];
        char val[20];
        int k = 0;
        while(yytext[j] != ' ') var[k++] = yytext[j++];
        var[k] = '\0';
        k = 0;
        printf("switch(%s){\n",var);
        fprintf(yyout,"switch(%s){\n",var);
        while(yytext[j] != '=') j++;
        j+=3;
        while(yytext[j] != ')') val[k++] = yytext[j++];
        val[k] = '\0';
        printf("   case %s: ",val);
        fprintf(yyout,"   case %s: ",val);
}

else[ ]if\(.*\) {
        int i = 8;
        char val[20];
        int k = 0;
        while(yytext[i] != '=') i++;
        i+=3;
        while(yytext[i] != ')') val[k++] = yytext[i++];
        val[k] = '\0';
        printf("   case %s: ",val);
        fprintf(yyout,"   case %s: ",val);
}
"{" {}
"{\n.*" {
        int i = 3;
        printf("\n");
        fprintf(yyout,"\n");
        while(yytext[i] != '}'){
		if(yytext[i] != '{'){
        	        printf("%c",yytext[i]);
                	fprintf(yyout,"%c",yytext[i]);
		}
        }
}

"else" {
        printf("   default: ");
        fprintf(yyout,"   default: ");
}

. {
        if(yytext[0] == '}'){
		 printf("\tbreak;");
		 fprintf(yyout,"\tbreak;");
	}
        else{
		 printf("%c",yytext[0]);
		 fprintf(yyout,"%c",yytext[0]);
	}
}

\n { 
	printf("\n");
	fprintf(yyout,"\n");
}
%%

int main(int argc, char *argv[]){
        if(argc > 1){
                FILE *fp = fopen(argv[1],"r");
                if(fp) yyin = fp;
        }
        FILE *fp2 = fopen("output.txt","w");
	yyout = fp2;
        yylex();
        printf("}\n");
        fprintf(yyout,"}\n");
        return 0;
}
