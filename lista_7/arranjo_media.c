#include<stdio.h>

double media(float* v, int n){
double soma = 0;
for(int i=0; i < n; i++){
soma = soma + v[i];
}

printf("%f", soma / n);
return 0;
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

media(arr, i);

return 0;
}
