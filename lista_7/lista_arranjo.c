#include<stdio.h>

int main() {
FILE* f=fopen("naturais.txt","r+t");
if (f==NULL) {
printf("Erro ao abrir arquivo\n");
return 1;
}

int arr[1000];
int i=0;

fscanf(f, "%i", &arr[i]);
while(!feof(f)){
i++;
fscanf(f, "%i", &arr[i]);
}

for(int a = 0; a < i; a++) {
printf("%i\n", arr[a]);
}

return 0;
}