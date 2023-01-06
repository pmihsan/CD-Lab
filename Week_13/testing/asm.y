%{                                                                                                                                                                      
#include<stdio.h>                                                                                                                                                       
#include<stdlib.h>                                                                                                                                                      
#include<string.h>                                                                                                                                                      
int yylex(void);                                                                                                                                                        
void yyerror(char *msg);                                                                                                                                                
extern FILE *yyin;                                                                                                                                                      
int l = 0;                                                                                                                                                              
%}                                                                                                                                                                      
                                                                                                                                                                        
%union {                                                                                                                                                                
        char exp[25];                                                                                                                                                   
        int val;                                                                                                                                                        
}                                                                                                                                                                       
%token TMP VAR NUM                                                                                                                                                      
%start pgm                                                                                                                                                              
%left '+' '-'                                                                                                                                                           
%left '*' '/'                                                                                                                                                           
%%                                                                                                                                                                      
                                                                                                                                                                        
pgm: S { printf("\n COMPLETED!!! \n\n"); }                                                                                                                              
   ;                                                                                                                                                                    
S : S S                                                                                                                                                                 
  | TMP '=' E '+' E ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                        
                          printf("\n LD R%d, %s", l+2, $5.exp);                                                                                                        
                          printf("\n ADD %s, R%d, R%d",$1.exp, l+1, l+2); l+=2; }                                                                                    
  | TMP '=' TMP '+' E ';' { printf("\n LD R%d, %s", l+1, $5.exp);                                                                                                      
                            printf("\n ADD %s, %s, R%d",$1.exp, $3.exp, l+1); l+=1; }                                                                                
  | TMP '=' E '+' TMP ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                      
                            printf("\n ADD %s, R%d, %s",$1.exp, l+1, $5.exp); l+=1; }                                                                                
  | TMP '=' TMP '+' TMP ';' { printf("\n ADD %s, %s, %s",$1.exp, $3.exp, $5.exp); }                                                                                  
  | TMP '=' E '-' E ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                        
                          printf("\n LD R%d, %s", l+2, $5.exp);                                                                                                        
                          printf("\n SUB %s, R%d, R%d",$1.exp, l+1, l+2); l+=2; }                                                                                    
  | TMP '=' TMP '-' E ';' { printf("\n LD R%d, %s", l+1, $5.exp);                                                                                                      
                            printf("\n SUB %s, %s, R%d",$1.exp, $3.exp, l+1); l+=1; }                                                                                
  | TMP '=' E '-' TMP ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                      
                            printf("\n SUB %s, R%d, %s",$1.exp, l+1, $5.exp); l+=1; }                                                                                
  | TMP '=' TMP '-' TMP ';' { printf("\n SUB %s, %s, %s",$1.exp, $3.exp, $5.exp); }                                                                                  
   | TMP '=' E '/' E ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                       
                          printf("\n LD R%d, %s", l+2, $5.exp);                                                                                                        
                          printf("\n DIV %s, R%d, R%d",$1.exp, l+1, l+2); l+=2; }                                                                                    
  | TMP '=' TMP '/' E ';' { printf("\n LD R%d, %s", l+1, $5.exp);                                                                                                      
                            printf("\n DIV %s, %s, R%d",$1.exp, $3.exp, l+1); l+=1; }                                                                                
  | TMP '=' E '/' TMP ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                      
                            printf("\n DIV %s, R%d, %s",$1.exp, l+1, $5.exp); l+=1; }                                                                                
  | TMP '=' TMP '/' TMP ';' { printf("\n DIV %s, %s, %s",$1.exp, $3.exp, $5.exp); }                                                                                  
   | TMP '=' E '*' E ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                       
                          printf("\n LD R%d, %s", l+2, $5.exp);                                                                                                        
                          printf("\n MULT %s, R%d, R%d",$1.exp, l+1, l+2); l+=2; }                                                                                   
  | TMP '=' TMP '*' E ';' { printf("\n LD R%d, %s", l+1, $5.exp);                                                                                                      
                            printf("\n MULT %s, %s, R%d",$1.exp, $3.exp, l+1); l+=1; }                                                                               
  | TMP '=' E '*' TMP ';' { printf("\n LD R%d, %s", l+1, $3.exp);                                                                                                      
                            printf("\n MULT %s, R%d, %s",$1.exp, l+1, $5.exp); l+=1; }                                                                               
  | TMP '=' TMP '*' TMP ';' { printf("\n MULT %s, %s, %s",$1.exp, $3.exp, $5.exp); }                                                                                 

  | ;                                                                                                                                                                   
E : VAR { strcpy($$.exp, $1.exp); }                                                                                                                                     
  ;                                                                                                                                                                     
%%                                                                                                                                                                      
                                                                                                                                                                        
void yyerror(char *msg) {                                                                                                                                               
        fprintf(stderr, "Error in parsing: %s\n", msg);                                                                                                                 
}                                                                                                                                                                       
                                                                                                                                                                        
int main(int argc, char *argv[]) {                                                                                                                                      
        yyin = fopen(argv[1], "r");                                                                                                                                     
        yyparse();                                                                                                                                                      
        return 1;                                                                                                                                                       
}
