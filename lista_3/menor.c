#include <stdio.h>

//retorna o menor valor entre a, b e c

int min(int a, int b, int c) {
    if(a < b && a < c) {
    return a;
    }
    if(b < a && b < c){
    return b;
    }
    return c;
}

int main() {
    int x,y,z;
    printf("insira os valores para a, b e c: \n");
    scanf("%i%i%i", &x,&y,&z);
    printf("%i", min(x,y,z));
    return 0;
}
