#include<stdio.h>
// retorna 1 se n for primo e 0 se nao for
int primo(int n, int i) {
    if(i == 1) return 1;
    if(n % i == 0) return 0;
    return primo(n, i - 1);
}
int main() {
    int n, i;
    scanf("%i", &n);
    i = n;
    printf("%i\n", primo(n, i - 1));
    return 0;
}