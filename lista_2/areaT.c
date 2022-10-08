#include <stdio.h>

//calcula a area de um triangulo

float areaT(float b, float c) {
     return (b * c) / 2;
}

int main() {
    float x, y;
    printf("insira o valor da base e da altura: \n");
    scanf("%f%f", &x,&y);
    printf("%.2f", areaT(x,y));
    return 0;
}