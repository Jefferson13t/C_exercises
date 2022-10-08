#include <stdio.h>

//calcula a media aritmetica de a, b e c

float media(float a, float b, float c) {
    return (float)(a + b + c) / 3 ;
}

int main() {
    float x,y,z;
    printf("insira os valores: \n");
    scanf("%f%f%f", &x, &y, &z);
    printf("%.2f", media(x,y,z));
    return 0;
}
