{
int n = 0;
}

“while” “if” “else” {
n++; printf(“\t keywords: %s”, yytext);
}

“int” “float” {
n++; printf(“\t keywords: %s”, yytext);
}

[a-z A-Z][a-z A-Z 0-9] * {
n++; printf(“\t identifier: %s”, yytext);

“<=” “==” “=” “++” “-“ “*” “+” {
n++; printf(“\t operator: %s”, yytext);

[(){}], ;] {
n++; printf(“\t separator: %s”, yytext();

[0-9] * “.” [0-9] {
n++; printf(“\t float: %s”, yytext();

int main() {

yylex();

printf(\n total number of tokens = %d \n”, n);

}
