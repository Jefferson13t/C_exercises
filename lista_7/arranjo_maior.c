#include<stdio.h>

double maior(float* v, int n){
float maior = v[0];
for(int i=0; i < n; i++){
if(maior < v[i]){
maior = v[i];
}
}

printf("%f", maior);
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

maior(arr, i);

return 0;
}