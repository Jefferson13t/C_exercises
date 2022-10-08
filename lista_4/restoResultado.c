#include<stdio.h>

//retorna o resultado inteiro da divisao com resto

int res(int a, int b, int i) {
    if(a - 2 * b < 0) return i;
    a = a - b;
    i++;
    return res(a, b, i);
}
int main() {
    int a,b,i;
    scanf("%i%i", &a,&b);
    i = 1;
    printf("%i", res(a,b, i));
    return 0;
}
