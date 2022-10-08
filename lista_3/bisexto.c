#include <stdio.h>

//Testa se o ano iserido é bisexto

int eBisexto(int ano) {
     return !(ano % 4);
}
int main() {
    int ano;
    printf("insira o ano: \n");
    scanf("%i", &ano);
    printf(eBisexto(ano) ? "bisexto" : "nao e bisexto");
    return 0;
}