#include<stdio.h>

//Retorna o resto da divisao entre dois numeros


int res(int a, int b) {
    if(a - 2 * b < 0) return a - b;
    
    return res(a - b, b);
}
int main() {
    int a,b;
    scanf("%i%i", &a,&b);
    printf("%i", res(a,b));
    return 0;
}