#include<stdio.h>

double escalar(int* a, int* b) {
    double soma = 0;

    for(int i = 0; i < 3; i++){
        soma += a[i] * b[i];
    }

    return soma;
}

int main() {
    int a[3],b[3];

    printf("insira o x,y e z do vetor a:");
    for(int i=0;i<3;i++){
        scanf("%i", &a[i]);
    }
    printf("insira o x,y e z do vetor b:");
    for(int i=0;i<3;i++){
        scanf("%i", &b[i]);
    }
    
    printf("%f", escalar(a, b));

return 0;
}