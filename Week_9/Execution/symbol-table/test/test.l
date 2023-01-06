%{

#include "y.tab.h"
#include <stdio.h>
#include <string.h>
extern char* yylval;

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

{fdatatype} { yylval = strdup(yytext); return FDT; }
{idatatype} { yylval = strdup(yytext); return IDT; }
{cdatatype}	{ yylval = strdup(yytext); return CDT; }
{chardata}	{ yylval = strdup(yytext); return CDATA; }
{intdata}	{ yylval = strdup(yytext); return IDATA; }
{fdata}	{ yylval = strdup(yytext); return FDATA; }
{name} { yylval = strdup(yytext); return NAME; }
{eq} { yylval = strdup(yytext); return EQ; }
{data} { yylval = strdup(yytext); return DATA; }
[;]	{ yylval = strdup(yytext); return SEMICOLON; }
{comma} { yylval = strdup(yytext); return COMMA; }

%%

int yywrap()
{
	return 1;
}
