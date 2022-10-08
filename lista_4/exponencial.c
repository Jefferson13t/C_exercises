#include<stdio.h>

//Retorna a potencia de um numero de expoente n

int expo(int k, int n, int i, int tot){
    if(i == n) return tot * k;
    tot = tot * k;
    i++;
    expo(k,n,i, tot);
}
int main() {
    int k, n, i, tot;
    scanf("%i%i", &k, &n);
    i = 1;
    tot = 1;
    printf("%i\n", expo(k,n, i, tot));
    return 0;
}