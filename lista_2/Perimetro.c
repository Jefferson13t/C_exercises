#include <stdio.h>

//recebe o raio r e calcula qual o perimetro desse circulo. 

float perimetro(float r) {  
     return 2 * 3.141592 * r;
}

int main() {
    float x;
    printf("insira o valor do raio: \n");
    scanf("%f", &x);
    printf("%.2f", perimetro(x));
    return 0;
}
