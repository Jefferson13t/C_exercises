#include<stdio.h>
int div(int a, int b) {
    while (a - b >= 0){
    a = a - b;
    }
    return a;
}
int main() {
    int a,b;
    printf("Insira dois numeros:\n ");
    scanf("%i%i", &a, &b);
    printf("%i", div(a,b));
    return 0;
}