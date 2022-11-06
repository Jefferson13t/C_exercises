#include<stdio.h>

double menor(float* v, int n){
float menor = v[0];
for(int i=0; i < n; i++){
if(menor > v[i]){
menor = v[i];
}
}

printf("%f", menor);
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

menor(arr, i);

return 0;
}