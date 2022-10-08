#include<stdio.h>
int fib(int x) {
    int a =1 ,b =1,c;
    if(x == 1 || x == 2) return 1;
    for(int i=1; i< x -1; i++) {
    c = a + b;
    a = b;
    b = c;
}
    return c;
}
int main() {
    int a;
    printf("Insira o elemento da sequencia que quer descobrir:\n ");
    scanf("%i", &a);
    printf("%i", fib(a));
    return 0;
}
