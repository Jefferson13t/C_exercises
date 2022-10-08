#include <stdio.h>

// testa se um numero esta dentro do intervalo dos outros dois

int dentro(int x,int y,int z) {
    return (x >= y && x <= z);
}

int main() {
    int a,b,c;
    printf("insira os valores: \n");
    scanf("%i%i%i", &a,&b,&c);
    printf(dentro(a,b,c) ? "dentro" : "fora");
    return 0;
}