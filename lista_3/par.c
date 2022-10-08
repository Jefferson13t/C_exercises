#include <stdio.h>

//Testa se um numero é par  

int ePar(int a) {
    return !(a % 2);
}
int main() {
    int x;
    printf("insira o valor: \n");
    scanf("%i", &x);
    printf(ePar(x) ? "par" : "impar");
    return 0;
}