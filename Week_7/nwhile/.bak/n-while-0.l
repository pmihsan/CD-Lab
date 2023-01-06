%{
        #include <stdio.h>
        #include <string.h>

        int init1=1,cond1=0,step1=0;
        char init_buff1[25],cond_buff1[25],step_buff1[25];
        int init2=1,cond2=0,step2=0;
        char init_buff2[25],cond_buff2[25],step_buff2[25];
%}

%option noyywrap

%%

"while("|"while ("  {
        printf("while found\n");
        if(init1 == 1) {
                init1=0;
                cond1 = 1;
        } else {
                init2 = 0;
                cond2 = 1;
        }
}


";"     {
        if(step2 && step1) {
                step2 = 0;
        }
}

")"     {printf("condition found\n");}

"}"     {printf("end of the body\n");}


"{"     {
        printf("BODY:\n");
        if(cond1 == 1) {
                cond1=0;
                step1=1;
        } else {
                cond2 = 0;
                step2 = 1;
        }
}


.       {
        if(init1)
                strcat(init_buff1,yytext);
        else if(cond1)
                strcat(cond_buff1,yytext);
        else if(init2)
                strcat(init_buff2,yytext);
        else if(cond2)
                strcat(cond_buff2,yytext);
        else if(step2)
                strcat(step_buff2,yytext);
        else if(step1)
                strcat(step_buff1,yytext);
        else {
                printf("ERROR!\n");
                return -1;
        }
}

%%

int main(int argc,char* argv[])
{
        if(argc>1){
                FILE* fp=fopen(argv[1],"r");
                if(fp)
                        yyin=fp;
        }

        yylex();

        FILE* fp1=fopen("output.txt","w");

        fprintf(fp1,"%s;\n%s;\nwhile((%s) || (%s)) {\n%s;\n%s;\n}\n",init_buff1, init_buff2, cond_buff1, cond_buff2, step_buff2, step_buff1);
        fclose(fp1);

        return 0;
}
