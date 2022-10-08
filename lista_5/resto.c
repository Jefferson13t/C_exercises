#include<stdio.h>
int res(int a, int b) {
    while (a - b >= 0){
        a = a - b;
    }
    return a;
}

int main() {
    int a,b;
    printf("Insira os dois numeros:\n ");
    scanf("%i%i", &a, &b);
    printf("%i", res(a,b));
    return 0;
}