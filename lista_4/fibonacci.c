#include<stdio.h>

//Retorna o N'esimo numero da sequencia de fibonacci

int fib(int n) {
    if(n == 1 || n == 2) return 1;
    return (fib(n - 2) + fib(n - 1) );
}

int main() {
    int n;
    scanf("%i", &n);
    printf("%i\n", fib(n));
    return 0;
}
