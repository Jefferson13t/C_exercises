#include <stdio.h>

//calcula a area dos lados de um paralelepipedo de base a, largura b e altura c

float areaP(float a, float b, float c) {
    return (a * b * 2) + (b * c * 2) + (a * c * 2);
}

int main() {
    float x, y, z;
    printf("insira o valor de a, b e c: \n");
    scanf("%f%f%f", &x,&y,&z);
    printf("%.2f", areaP(x,y,z));
    return 0;
}
