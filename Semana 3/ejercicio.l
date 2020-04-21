%{
    #include<stdio.h>
%}

%%

[ \n\t] ;
"int"|"while"|"if"|"else" printf("(\" %s \",KEYWORD) \n",yytext);
[a-z]                     printf("(\" %s \",IDENTIFIER) \n",yytext);
[=+-<>!]                     printf("(\" %s \",OPERATOR) \n",yytext);
[0-9]+                    printf("(\" %d \",INT_CONSTANT) \n",atoi(yytext));
";"|"("|"}"|"{"|")"                   printf("(\" %s \",SEPECIAL_SYMBOL) \n",yytext);

%%

