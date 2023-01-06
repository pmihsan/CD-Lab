%{
	int vowels=0; 
	int consonants =0; 
%}
%option noyywrap
%%

[aeiouAEIOU] {
	vowels++;
} 

[a-zA-Z] {
	consonants++;
} 
%%
int main()  {
    printf("Enter the string of vowels and consonents:"); 
    yylex(); 
    printf("Number of vowels are:  %d\n", vowels); 
    printf("Number of consonants are:  %d\n", consonants); 
    return 0;
}
