#include<stdio.h>

//retorna o menor multiplo comum entre a e b

int mmc(int a, int b, int i) {
    if(i % a == 0 && i % b == 0) return i;
    i++;
    return mmc(a,b,i);
}
int main() {
    int a, b,i;
    scanf("%i%i", &a, &b);
    i = a > b ? a : b;
    printf("%i", mmc(a, b, i));
    return 0;
}