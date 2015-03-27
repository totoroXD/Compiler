%{
int count=1;
%}
%(write the start conditions here)

digit [0-9]
letter [a-zA-z_]

%%
/*Add the rules here*/
[ \t] ;
[+-*/] printf("#%d operator");
return printf("#%d return\n",count,yytext);
{letter}({letter}|{digit})*"(" printf("#%d function ID: %s\n",count,yytext);
int|double|char|float	printf("#%d data type: %s\n",count,yytext);
{letter}({letter}|{digit})* printf("#%d var ID: %s\n",count,yytext);
\n						count++; //Record lines here
.

%%
int main(){
	yylex();
	return 0;
}