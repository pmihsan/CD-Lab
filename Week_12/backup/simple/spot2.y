%{                                                                                                                                                                      
#include <stdio.h>                                                                                                                                                      
int yylex(void);                                                                                                                                                        
void yyerror(char *msg);                                                                                                                                                
char p = 'A' - 1;

int lc = 0;

char lb[3] = "L1";

char switchid;

char switchlabel;

int switchlabcount;

extern FILE* yyin;

%}                                                                                                                                                              
%union {        
        struct LEinfo {       
                char addrbase;       
                char arrbase;        
                char addr;
                char arr;
		int size;   
        } le;
	struct Sinfo {
		char label;
		int labcount;
		char code[1000];
	} s;
	struct Binfo {
		char tl;
		int tlcount;
		char fl;
		int flcount;
		char code[1000];
	} b;
        char var;  
	struct LSinfo {
		char tl;
		int tlcount;
		char fl;
		int flcount;
		char id;
		char label;
		int labcount;
	} ls;
	int val;
};

%token <var> ID

%token <val> NUM

%token IF ELSE WHILE SWITCH CASE BREAK DEFAULT

%type <le> L

%type <le> E

%type <s> S

%type <b> B

%type <ls> LABST

%left '+' '-'

%left '*' '/'

%nonassoc UMINUS 

%start P

%%

P :  S

S : IF '(' B ')' { ++lc; $3.tl = 'L'; $3.tlcount = lc++; $3.fl = 'L'; $3.flcount = lc; $$.label = 'L'; ++lc; $$.labcount = lc; printf("if t1 goto %c%d\ngoto %c%d\n%c%d:\n", $3.tl, $3.tlcount, $3.fl, $3.flcount, $3.tl, $3.tlcount); } S { printf("goto %c%d\n%c%d : \n",  $$.label, $$.labcount, $3.fl, $3.flcount); } ELSE S { printf("%c%d:\n", $$.label, $$.labcount); }

  | WHILE '(' B ')' { ++lc; $3.tl = 'L'; $3.tlcount = lc++; $3.fl = 'L'; $3.flcount = lc; $$.label = 'L'; $$.labcount = ++lc; printf("%c%d:\nif t1 goto %c%d\ngoto %c%d\n%c%d:\n", $$.label, $$.labcount, $3.tl, $3.tlcount, $3.fl, $3.flcount, $3.tl, $3.tlcount); } S { printf("goto %c%d \n %c%d: \n", $$.label, $$.labcount, $3.fl, $3.flcount);  }
  
  | SWITCH '(' ID ')' '{' { switchid = $3; lc++; } LABST '}' { } 
			
  | ID '=' E ';' { printf("%c = %c\n\n", $1, $3.addr); }

  | L '=' E ';' { ++p; printf("%c[%c] = %c\n",  $1.arrbase, $1.addr, $3.addr); }

  ;

B : ID { }

  ;

LABST : CASE ID ':' { $$.tl = 'L'; $$.tlcount = ++lc; $$.fl = 'L'; $$.flcount = ++lc; printf("if %c == %c goto %c%d\ngoto %c%d\n", switchid, $2, $$.tl, $$.tlcount, $$.fl, $$.flcount); printf("%c%d:\n", $$.tl, $$.tlcount); switchlabel = $$.fl; switchlabcount = $$.flcount;} S BREAK ';' { printf("goto L1\n%c%d:\n", switchlabel, switchlabcount);  } LABST  { }

  | CASE NUM ':' { $$.tl = 'L'; $$.tlcount = ++lc; $$.fl = 'L'; $$.flcount = ++lc; printf("if %c == %d goto %c%d\ngoto %c%d\n", switchid, $2, $$.tl, $$.tlcount, $$.fl, $$.flcount); printf("%c%d:\n", $$.tl, $$.tlcount); switchlabel = $$.fl; switchlabcount = $$.flcount;} S BREAK ';' { printf("goto L1\n%c%d:\n", switchlabel, switchlabcount);  } LABST  { }

  | CASE ID ':' { $$.tl = 'L'; $$.tlcount = ++lc; $$.fl = 'L'; $$.flcount = ++lc; printf("if %c == %c goto %c%d\ngoto %c%d\n", switchid, $2, $$.tl, $$.tlcount, $$.fl, $$.flcount); printf("%c%d:\n", $$.tl, $$.tlcount); switchlabel = $$.fl; switchlabcount = $$.flcount;} S { printf("%c%d:\n", switchlabel, switchlabcount);  } LABST  { }

  | CASE NUM ':' { $$.tl = 'L'; $$.tlcount = ++lc; $$.fl = 'L'; $$.flcount = ++lc; printf("if %c == %d goto %c%d\ngoto %c%d\n", switchid, $2, $$.tl, $$.tlcount, $$.fl, $$.flcount); printf("%c%d:\n", $$.tl, $$.tlcount); switchlabel = $$.fl; switchlabcount = $$.flcount;} S { printf("%c%d:\n", switchlabel, switchlabcount);  } LABST  { }

  |  DEFAULT  ':' S { printf("L1:\n"); }

  ;

E : E '+' E { ++p; $$.addr = p; printf("%c = %c + %c\n", $$.addr, $1.addr, $3.addr); }

  | ID { $$.addr = $1; }

  | L { ++p; $$.addr = p; printf("%c = %c[%c]\n", $$.addr, $1.arrbase, $1.addr); }

  ;

L : ID '[' E ']' { $$.arr = $1; $$.arrbase = $$.arr; ++p; $$.addr = p; printf("%c = %c * 40\n", $$.addr, $3); } 

  |   L '[' E ']' { $$.arr = $1.arr; char t = ++p; $$.addr = ++p; printf("\%c = %c * 4\n", t, $3); printf("%c = %c + %c\n", $$.addr, $1.addr, t); }

  ;

%%

void yyerror(char *msg) {

    fprintf(stderr,"error %s", msg);

}                                                                                                                                        

int main () {

    yyin = fopen("test2.txt", "r");
    yyparse();

}
