#include <stdio.h>

//retorna o maior numero entre a, b e c

int max(int a, int b, int c) {
    if(a > b && a > c) {
    return a;
    }
    if(b > a && b > c){
    return b;
    }
    return c;
}

int main() {
    int x,y,z;
    printf("insira os valores para a, b e c: \n");
    scanf("%i%i%i", &x,&y,&z);
    printf("%i", max(x,y,z));
    return 0;
}