%{
#include "y.tab.h"
int count=1;
%}

digit [0-9]
letter [a-zA-z_]


%Start COMMENT
%Start LINECOMMENT
%Start CHARACTER

%%


<COMMENT>"*/"	BEGIN INITIAL;
<COMMENT>\n		count++, printf("\t#%d comment\n",count);
<COMMENT>.		;
<LINECOMMENT>\n BEGIN INITIAL, count++;
<LINECOMMENT>.  ;
<CHARACTER>.'  {
	printf("\t#%d character: %c\n",count,yytext[0]);
	printf("\t#%d '\n",count);
    yylval.cval=yytext[0];
    BEGIN INITIAL;
    return CHAR;
}
<INITIAL>(for|while)"(" {
	yytext[strlen(yytext)-1]='\0';
	printf("\t#%d %s loop\n",count,yytext);
	printf("\t#%d (\n",count);
}
<INITIAL>"/*"	BEGIN COMMENT, printf("\t#%d comment\n",count);
<INITIAL>"//"   BEGIN LINECOMMENT, printf("\t#%d comment\n",count);
<INITIAL>'   BEGIN CHARACTER, printf("\t#%d : '\n",count);
<INITIAL>[ \t] ;
<INITIAL>"+"|"-"|"*"|"/"|"="|"+="|"++"|"<"|"<=" {printf("\t#%d operator: %s\n",count,yytext); return yytext[0];}
<INITIAL>return {
    printf("\t#%d return\n",count);
    return RETURN;
}
<INITIAL>int|double|char|float	{
    printf("\t#%d data type: %s\n",count,yytext);
    return TYPE;
}
<INITIAL>{letter}({letter}|{digit})* {
    printf("\t#%d ID: %s\n",count,yytext);
    return ID;
}
<INITIAL>{digit}+ {
    printf("\t#%d number: %s\n",count,yytext); 
    yylval.ival=atoi(yytext);
    return INT;
}
<INITIAL>[(){};,] {printf("\t#%d %s\n",count,yytext);return yytext[0];}
<INITIAL>\n						count++; //Record lines here
<INITIAL>.

%%
