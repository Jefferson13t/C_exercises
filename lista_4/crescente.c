#include<stdio.h>

//Escreve a sequencia de 1 ate n

void crescente(int x,int i){
    if(i > x) return;
    printf("%i\n", i);
    i++;
    crescente(x, i);
}

int main() {
    int x, i;
    scanf("%i", &x);
    i = 1;
    crescente(x, i);
    return 0;
 }