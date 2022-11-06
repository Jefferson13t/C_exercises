#include <stdio.h> 

float media_matriz(int n, float mat[][100]){
    float soma = 0;
    
    for(int i=0; i < n; i++) {

        for(int j=0;j<n;j++){
            soma += mat[i][j];
        }
    }

    return soma / (n * n);
}

int main() {
    int dimensao;
    float matriz[100][100];

    FILE* f=fopen("matrizQ.txt", "r+t");
        if(f== NULL){
            printf("Erro ao abrir arquivo\n");
            return 1;
        }
    
    fscanf(f, "%i", &dimensao);
   
    for(int i=0;i<dimensao; i++){

        for(int j=0;j<dimensao;j++){
            fscanf(f, "%f", &matriz[i][j]);
        }
    }
    printf("%f", media_matriz(dimensao, matriz));

    return 0;
}