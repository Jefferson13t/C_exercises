#include<stdio.h>

//Retorna a soma dos termos de um numero

int dig(int n, int som, int digito){
    if(n < 10) return som + n;
    digito = n % 10;
    som = som + digito;
    n = n / 10;
    return dig(n,som,digito);
}

int main() {
    int n, som, digito;
    som = 0;
    digito = 0;
    scanf("%i", &n);
    printf("%i\n", dig(n, som, digito));
    return 0;
}