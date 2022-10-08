#include<stdio.h>

//Retorna o maior divisor comum entre 3 numeros

int mdc3(int a, int b,int c, int i) {
    if(a % i == 0 && b % i == 0 && a % i == 0) return i;
    return mdc3(a, b,c, i - 1);
}

int main() {
    int a,b,c, i;
    scanf("%i%i%i", &a, &b, &c);
    i = a > b ? (a > c ? a : c) : (b>c ? b: c);
    printf("%i\n", mdc3(a,b,c, i));
    return 0;
}