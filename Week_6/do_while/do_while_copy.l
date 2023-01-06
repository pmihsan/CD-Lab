%{                                                                                                                                                                      
        #include <string.h>                                                                                                                                             
        int init = 1, cond = 0, step = 0, other = 0;                                                                                                                    
        char init_buffer[20], cond_buffer[20], step_buffer[20], other_buffer[20];                                                                                       
%}                                                                                                                                                                      
%option noyywrap                                                                                                                                                        
 
%%                                                                                                                                                                      
"do{"|"do {" {                                                                                                                                                          
        init = 0;                                                                                                                                                       
        step = 1;                                                                                                                                                       
}                                                                                                                                                                       
"while("|"while (" {                                                                                                                                                    
        step = 0;                                                                                                                                                       
        cond = 1;                                                                                                                                                       
}                                                                                                                                                                       
")"|");" {                                                                                                                                                              
        if(step) {                                                                                                                                                      
                strcat(step_buffer, yytext);                                                                                                                            
        } else {                                                                                                                                                        
                cond = 0;                                                                                                                                               
                other = 1;                                                                                                                                              
        }                                                                                                                                                               
}                                                                                                                                                                       
"}" {}                                                                                                                                                                  
\n { if(step) strcat(step_buffer, yytext); }                                                                                                                            
. {                                                                                                                                                                     
        if(init)                                                                                                                                                        
                strcat(init_buffer, yytext);                                                                                                                            
        else if(cond)                                                                                                                                                   
                strcat(cond_buffer, yytext);                                                                                                                            
        else if(step)                                                                                                                                                   
                strcat(step_buffer, yytext);                                                                                                                            
        else if(other)                                                                                                                                                  
                strcat(other_buffer, yytext);                                                                                                                           
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
        fprintf(fp, "%s\nwhile(%s) {%s\n}\n%s", init_buffer, cond_buffer, step_buffer, other_buffer);  
        printf("%s\nwhile(%s) {%s\n}\n%s", init_buffer, cond_buffer, step_buffer, other_buffer);                                                                                                                                    
        fclose(fp);                                                                                                                                                     
        return 0;                                                                                                                                                       
}
