%{                                                                                                                                                                      
        #include <string.h>                                                                                                                                             
        int init = 1, cond = 0, step = 0, other = 0;                                                                                                                    
        char init_buffer[20], cond_buffer[20], step_buffer[50], other_buffer[20], inc[20];                                                                                       
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

.*\n\} {
	if(step){
		int m = 0;
		int k = 0;
		while(yytext[m] != ';'){
			inc[k++] = yytext[m++];
		}
	} 
}		
		                                                                                                                                                                
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
        printf("for(%s%s;%s){\n%s\n}\n",init_buffer, cond_buffer,inc,step_buffer);
        fprintf(fp,"for(%s%s;%s){\n%s\n}\n",init_buffer, cond_buffer,inc,step_buffer);
	fclose(fp);                                                                                                                                                     
        return 0;                                                                                                                                                       
}
