#include <stdio.h>

//calcula a area de um circulo de raio r

float area(float r) {
     return 3.141592 * r * r;
}

int main() {
    float x;
    printf("insira o valor do raio: \n");
    scanf("%f", &x);
    printf("%.2f", area(x));
    return 0;
}