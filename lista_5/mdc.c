#include<stdio.h>
int mdc(int x, int y) {
    int mdc = 1;
    for(int i = 1; (i <= x) && (i <= y); i++) {
    if((x % i == 0) && (y % i == 0)) {
    mdc = i;
    }
}
    return mdc;
}

int main() {
    int a,b;
    printf("Insira os dois numeros:\n ");
    scanf("%i%i", &a, &b);
    printf("%i", mdc(a,b));
    return 0;
}
