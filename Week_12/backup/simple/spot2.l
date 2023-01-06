%{                      
                             
#include <stdio.h>                                                                                                                                                      
#include "y.tab.h"                                                                                                                                                      
%}                                                                                                                                                             
%option noyywrap                                                                                                                                                                                                                                                     
%%

"switch" { return SWITCH; }

"if"	{ return IF; }

"else"  { return ELSE; }

"while" { return WHILE; }  

"case"  { return CASE; }

"break" { return BREAK; }

"default" { return DEFAULT; }
 
[A-Za-z]	{ yylval.var = yytext[0]; return ID; }

"'"[A-Za-z]"'"  { yylval.var = yytext[1]; return ID; }                                                                                        
[0-9]+	{ yylval.val = atoi(yytext); return NUM; }

[\t ] ;                                                                                                                                                                                                 
[\n]  ;

. { return yytext[0]; }                                                                                                                                                                           
%%
