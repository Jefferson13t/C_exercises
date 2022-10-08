#include<stdio.h>
void crescente(int x) {
    int i = 1;
    while(i <= x) {
    printf("%i\n", i);
    i++;
    }
}

int main() {
    int p;
    printf("Insira um numero:\n ");
    scanf("%i", &p);
    crescente(p);
    return 0;
}