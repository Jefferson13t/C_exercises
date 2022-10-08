#include <stdio.h>

//calcula o volume de um paralelepipedo

float volume(float a, float b, float c) {
    return a * b * c;
}

int main() {
    float x, y, z;
    printf("insira o valor de a, b e c: \n");
    scanf("%f%f%f", &x,&y,&z);
    printf("%.2f", volume(x,y,z));
    return 0;
}