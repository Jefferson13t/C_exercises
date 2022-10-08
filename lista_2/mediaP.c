#include <stdio.h>

//calcula a media ponderada entre a, b e c. Com pesos a = 3, b = 4 e c = 6.

float mediaP(float a, float b, float c) {
    return (float)(a * 3 + b * 4 + c * 5) / (3 + 4 + 5) ;
}

int main() {
    float x,y,z;
    printf("insira os valores: \n");
    scanf("%f%f%f", &x, &y, &z);
    printf("%.2f", mediaP(x,y,z));
    return 0;
}