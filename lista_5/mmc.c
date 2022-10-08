#include<stdio.h>
#include<math.h>

int mmc(int a, int b) {
    int limite = a * b;
    for(int i=1; i< limite; i++) {
    if(i % a == 0 && i % b == 0) return i;
    }
    return limite;
}

int main() {
    int a,b;
    printf("Insira dois numeros:\n ");
    scanf("%i%i", &a, &b);
    printf("%i", mmc(a,b));
    return 0;
}
