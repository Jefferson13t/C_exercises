#include <stdio.h>
#include <math.h>
void bhaskara(float x, float y, float z){
    float delta=(y*y)-4*x*z;
    float raizdelta=sqrt(delta);
    if(delta>=0){
    float raiza=(-y+raizdelta)/(2*x);
    float raizb=(-y-raizdelta)/(2*x);
    printf("%f\n%f\n",raiza,raizb);
} else {
    printf("nao possui raiz positiva\n");
}
}

int main(){
    float a,b,c;
    printf("Insira os valores de a, b e c:\n");
    scanf("%f%f%f", &a, &b, &c);
    if(a!=0) bhaskara(a,b,c);
    return 0;
}