%option noyywrap
S \/\*
E \*\/
C \"
D \/\/
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

{D}(.*) {
	flag = 1;
}

[S|E] ;

.* ;

\n return 0;
%%

int main() {
    yylex();
    if(flag == 1){
        printf("Valid comment\n");
    }
    else{
        printf("Not a Valid Comment\n");
    }
    return 0;
}
