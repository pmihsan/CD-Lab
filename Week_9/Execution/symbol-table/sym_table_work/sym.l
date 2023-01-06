%{

#include "y.tab.h"
#include <stdio.h>
#include <string.h>
extern char* yylval; 
//extern YYSTYPE yylval;
%}

char [A-Za-z]
num [0-9]
eq [=]
name {char}+
data {num}+
fdatatype (float|double)
idatatype (int)
cdatatype (char)
chardata (['](.)['])
floatdata ([0-9]+[.][0-9]+)
sign ("-"|"+"){0,1}
intdata {sign}([0-9]+)
expr ([0-9]+(([+*][0-9]+)|([/%][1-9]+)|("-"[0-9]+))+)
fdata {sign}({intdata}|{floatdata}|{expr})
comma [,]

%%

{fdatatype} { printf("float datatype - %s\n",yytext); yylval = strdup(yytext); return FDT; }
{idatatype} { printf("int datatype - %s\n",yytext); yylval = strdup(yytext); return IDT; }
{cdatatype}     { printf("char datatype - %s\n",yytext); yylval = strdup(yytext); return CDT; }
{chardata}      { printf("character data - %s\n"); yylval = strdup(yytext); return CDATA; }
{data} { printf("Data - %s\n",yytext); yylval = strdup(yytext); return DATA; }
{intdata}       { printf("integer data - %s\n",yytext);  yylval = strdup(yytext); return IDATA; }
{fdata} { printf("float data - %s\n",yytext); yylval = strdup(yytext); return FDATA; }
{name} { printf("Identifier - %s\n",yytext); yylval = strdup(yytext); return NAME; }
{eq} { printf("Assignment - %s\n",yytext); yylval = strdup(yytext); return EQ; }
[;]     { printf("Seperator(semicolon) - %s\n",yytext); yylval = strdup(yytext); return SEMICOLON; }
{comma} { printf("Seperator - %s\n",yytext); yylval = strdup(yytext); return COMMA; }
%%

int yywrap()
{
        return 1;
}
