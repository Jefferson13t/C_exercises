#include<stdio.h>

//Retorna o fatorial de n

int fat(int n) {
    if(n == 1) return 1;
    return n * fat(n-1);
}

int main() {
    int n;
    scanf("%i", &n);
    printf("%i\n", fat(n));
    return 0;
}