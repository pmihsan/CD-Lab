%option noyywrap

op [+/*-]                                                                                                               

%{                                                                                                                      
#include <stdbool.h>  
#include<stdio.h>  
#include<string.h>                                                                                                
typedef struct node {                                                                                                   
        int val;                                                                                                        
        struct node *next;                                                                                              
}node_t;                                                                                                                
char ans[100];
int j = 0;                                                                                                         
int pop();                                                                                                              
void push(int val);                                                                                                     
int priority (int op);                                                                                                  
int peek();                                                                                                             
bool isEmpty();                                                                                                                                                                                  
%}                                                                                                                      
                                                                                                                        
%%                                                                                                                      
                                                                                                                        
[a-zA-Z] { 
        strcat(ans,yytext);
        j += yyleng; 
        }                                                                                      
"(" {push(yytext[0]);}                                                                                                  
{op} {                                                                                                                  
        while ( priority(peek()) > priority(yytext[0])){     
                ans[j++] = pop();
        }                                                                                                               
        push(yytext[0]);                                                                                                
}                                                                                                                       
")" {                                                                                                                   
        while ( peek() != '(') {                                                                                        
                ans[j++] = pop();       
        }                                                                                                               
        pop();                                                                                                          
}                                                                                                                       
\n {                                                                                                                    
        while (!isEmpty()){                                                                                             
                ans[j++] = pop();        
        } 
        ans[j] = '\0';
	printf("ANS: %s\n",ans);
        fprintf(yyout,"%s\n",ans);                                                                                                 
}                                                                                                                       
exit { return 0; }                                                                                                      
%%                                                                                                                      
                                                                                                                        
node_t *stack_head = NULL;                                                                                              
                                                                                                                        
int priority (int op) {                                                                                                 
        switch (op) {                                                                                                   
                case '+':                                                                                               
                case '-':                                                                                               
                        return 1;                                                                                       
                case '*':                                                                                               
                case '/':                                                                                               
                        return 2;                                                                                       
        }                                                                                                               
        return -1;                                                                                                      
}                                                                                                                       
                                                                                                                        
int peek() {                                                                                                            
        if (stack_head == NULL) return -1;                                                                              
        return stack_head->val;                                                                                         
}                                                                                                                       
                                                                                                                        
bool isEmpty() {                                                                                                        
        if (stack_head == NULL) return true;                                                                            
        return false;                                                                                                   
}                                                                                                                       
                                                                                                                        
int pop() {                                                                                                             
        if (stack_head == NULL) return -1;                                                                              
        int val = stack_head->val;                                                                                      
        node_t *temp = stack_head;                                                                                      
        stack_head = stack_head->next;                                                                                  
        free(temp);                                                                                                     
        return val;                                                                                                     
}                                                                                                                       
                                                                                                                        
void push (int val) {                                                                                                   
        node_t *temp = (node_t *) malloc (sizeof(node_t));                                                              
        temp->val = val;                                                                                                
        temp->next = stack_head;                                                                                        
        stack_head = temp;                                                                                              
}                                                                                                                       
                                                                                                                        
                                                                                                                        
void main (int argc, char *argv[]) { 
	if(argc < 1) {
		printf("Enter filename\n");
		return;
	}
        char exp[100]; 
        FILE *fp = fopen(argv[1], "r");
        yyin = fp;
        FILE *fp2 = fopen("out.txt", "w");
        yyout = fp2;
        yylex(); 
}
