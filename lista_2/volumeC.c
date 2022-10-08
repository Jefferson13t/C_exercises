#include <stdio.h>

//calcula o volume de um cilindro

float volumeCi(float r, float h) {
    return 3.141592 * r * r * h;
}

int main() {
    float x, h;
    printf("insira o valor do raio e da altura: \n");
    scanf("%f%f", &x, &h);
    printf("%.2f", volumeCi(x, h));
    return 0;
}
