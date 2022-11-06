#include<stdio.h>
#include<math.h>

double media(float* v, int n){
    double soma = 0;
    for(int i=0; i < n; i++){
        soma += v[i];
    }
    return soma / n;
}

double variancia(float* v, int n) {
double med = media(v, n);
double soma = 0;
for(int i=0; i < n; i++){
    soma += pow(v[i] - med, 2);
}
return soma / n;
}


int main() {
FILE* f=fopen("naturais.txt","r+t");
if (f==NULL) {
printf("Erro ao abrir arquivo\n");
return 1;
}

float arr[1000];
int i=0;

fscanf(f, "%f", &arr[i]);
while(!feof(f)){
i++;
fscanf(f, "%f", &arr[i]);
}

printf("%f", variancia(arr, i));

return 0;
}
