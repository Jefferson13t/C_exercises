#include<stdio.h>
int fat(int n) {
    int result = 1;
    for(int i = 1; i<= n; i++) {
    result = result * i;
    }
    return result;
}

int main() {
    int n;
    printf("Insira um numero:\n ");
    scanf("%i", &n);
    printf("%i", fat(n));
    return 0;
}