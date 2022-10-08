#include <stdio.h>
#include <math.h>

float hipotenusa(float b, float c) {
     return sqrt((b*b) + (c*c));
}
int main() {
    float b, c;
    printf("insira o valor de b e c: \n");
    scanf("%f%f", &b, &c);
    printf("%.2f", hipotenusa(b,c));
    return 0;
}