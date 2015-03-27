%{
int count=1;
%}

digit [0-9]
letter [a-zA-z_]


%Start COMMENT
%Start LINECOMMENT
%Start CHARACTER

%%


<COMMENT>"*/"	BEGIN INITIAL;
<COMMENT>\n		count++, printf("#%d comment\n",count);
<COMMENT>.		;
<LINECOMMENT>\n BEGIN INITIAL, count++;
<LINECOMMENT>.  ;
<CHARACTER>.'  {
	printf("#%d character: %c\n",count,yytext[0]);
	printf("#%d '\n",count);
	BEGIN INITIAL;
}
<INITIAL>(for|while)*"(" {
	yytext[strlen(yytext)-1]='\0';
	printf("#%d %s loop\n",count,yytext);
	printf("#%d (\n",count);
}
<INITIAL>"/*"	BEGIN COMMENT, printf("#%d comment\n",count);
<INITIAL>"//"   BEGIN LINECOMMENT, printf("#%d comment\n",count);
<INITIAL>'   BEGIN CHARACTER, printf("#%d number: %s\n",count,yytext);
<INITIAL>[ \t] ;
<INITIAL>"+"|"-"|"*"|"/"|"="|"+="|"++"|"<"|"<=" printf("#%d operator: %s\n",count,yytext);
<INITIAL>return printf("#%d return\n",count);
<INITIAL>{letter}({letter}|{digit})*"(" {
	yytext[strlen(yytext)-1]='\0';
	printf("#%d function ID: %s\n",count,yytext);
	printf("#%d (\n",count);
}
<INITIAL>int|double|char|float	printf("#%d data type: %s\n",count,yytext);

<INITIAL>"*"{letter}({letter}|{digit})* {
	yytext[strlen(yytext)-1]='\0';
	printf("#%d pointer ID: %s\n",count,yytext);
	printf("#%d [\n",count);
}
<INITIAL>{letter}({letter}|{digit})*"[" {
	yytext[strlen(yytext)-1]='\0';
	printf("#%d array ID: %s\n",count,yytext);
	printf("#%d [\n",count);
}
<INITIAL>{letter}({letter}|{digit})* printf("#%d var ID: %s\n",count,yytext);
<INITIAL>{digit}* printf("#%d number: %s\n",count,yytext);
<INITIAL>[(){};,]|return printf("#%d %s\n",count,yytext);
<INITIAL>\n						count++; //Record lines here
<INITIAL>.

%%
int main(){
	yylex();
	return 0;
}