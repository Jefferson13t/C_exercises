#include<stdio.h>
int primo(int x) {
    // retorna se o numero é primo ou não for
    for(int i = 2; i < x; i++) {
    if(x % i == 0) return 0;
    }
    return 1;
}
int main() {
    int p;
    printf("Insira um numero:\n ");
    scanf("%i", &p);

    primo(p) ? printf("e primo") : printf("nao e primo");
    return 0;
}
