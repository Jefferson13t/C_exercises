#include<stdio.h>
int mdc3(int x, int y, int z) {
    int mdc = 1;
    for(int i = 1; (i <= x) && (i <= y) && (i <= z); i++) {
    if((x % i == 0) && (y % i == 0) && (z % i == 0)) {
    mdc = i;
    }
}
    return mdc;
}
int main() {
    int a,b,c;
    printf("Insira os tres numeros:\n ");
    scanf("%i%i%i", &a, &b, &c);
    printf("%i", mdc3(a,b,c));
    return 0;
}
