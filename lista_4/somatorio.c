#include<stdio.h>

//Retorna o somatorio de i * i n vezes

int form(int n, int i,int som) {
    if(i > n) return som;
    som = som + i * i;
    i++;
 return form(n, i, som);
}
int main() {
    int n, i, som;
    scanf("%i", &n);
    i = 1;
    som = 0;
    printf("%i", form(n,i, som));
return 0;
}