#include<stdio.h>
int dig(int n) {
    int soma = 0;
    int digito = 0;
    while (n > 0){
    digito = n % 10;
    soma = soma + digito;
    n = n / 10;
    }
    return soma;
}

int main() {
    int n;
    printf("Insira um numero:\n ");
    scanf("%i", &n);
    printf("%i\n", dig(n));
    return 0;
}
