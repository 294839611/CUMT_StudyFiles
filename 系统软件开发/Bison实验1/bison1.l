%{
	#define YYSTYPE char*
	#include"y.tab.h"
	#include <string.h>	
%}

char [A-Za-z]
num	[0-9]
eq	[=]
name	{char}+
age	{num}+

%%

{name}	{yylval = (char*)strdup(yytext); return NAME;}
{eq}	{return EQ;}
{age}	{yylval = (char*)strdup(yytext);return AGE;}

%%

int yywrap(){return 1;}

