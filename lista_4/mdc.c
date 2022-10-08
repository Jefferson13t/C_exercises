#include<stdio.h>

//Reetorna o maximo divisor comum entre 2 numeros

int mdc(int a, int b, int i) {
    if(a % i == 0 && b % i == 0) return i;
    return mdc(a, b, i - 1);
}

int main() {
    int a,b, i;
    scanf("%i%i", &a, &b);
    i = a > b ? a : b;
    printf("%i\n", mdc(a,b, i));
    return 0;
}