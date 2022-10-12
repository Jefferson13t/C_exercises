#include <stdio.h>
#include <math.h>

float calcDistancia(int n, float x, float y, float distancia) {
    if(n <= 1) return distancia;
    float x1, y1;
    
    printf("insira as novas coordenadas: \n");
    scanf("%f%f", &x1, &y1);
    distancia += sqrt(pow(x1 - x, 2) + pow(y1 - y, 2));

    return calcDistancia(n - 1, x1, y1, distancia);

}

int main() {

    int n;
    float x, y, distancia;

    printf("Quantos pontos serao? \n");
    scanf("%i", &n);
    printf("Insira as coordenadas iniciais: \n");
    scanf("%f%f", &x, &y);
    
    if(n <= 1) {
        printf("A distancia e 0");
        } else{
            printf("%.3f", calcDistancia(n, x, y, distancia));
        }
    return 0;
}
