%option noyywrap
S \/\*
E \*\/
C \"

%{
    int flag = 0;
%}

%%
{S}(.*){C}{E}{C}(.*){E} {
	flag = 1;
}

{S}(.*){E} {
	flag = 1;
}

[S|E] ;

.* ;

\n return 0;
%%

int main() {
    yylex();
    if(flag == 0){
        printf("Not a Valid comment\n");
    }
    else{
        printf("Valid Comment\n");
    }
    return 0;
}
