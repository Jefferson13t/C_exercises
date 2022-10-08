#include<stdio.h>
#include<math.h>

float sqrtF(float a) {
    return sqrt(a);
}

int main() {
    float a;
    printf("Insira um numero:\n ");
    scanf("%f", &a);
    printf("%.3f", sqrtF(a));
    return 0;
}