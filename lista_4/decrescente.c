#include<stdio.h>

//Escreve os numeros de x ate 1

int decrescente(int x) {
    if(x == 0) return 0;
    printf("%i\n", x);
    decrescente(x - 1);
}
    int main() {
    int x;
    scanf("%i", &x);
    decrescente(x - 1);
    return 0;
}