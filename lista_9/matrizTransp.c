#include <stdio.h>

void transposta(int n, float A[][100], float T[][100]){

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            T[i][j] = A[j][i];
        }        
    }
}

int main() {
    int dimensao;
    float matriz[100][100], matrizTransposta[100][100];
    FILE *f = fopen("matrizQ.txt", "r+t");
        if(f== NULL){
            printf("Erro ao abrir arquivo");
            return 1;
        }
    
    fscanf(f, "%i", &dimensao);

    for(int i=0;i<dimensao; i++){
        
        for(int j=0; j<dimensao;j++){
            fscanf(f, "%f", &matriz[i][j]);
        }
    }   
    transposta(dimensao, matriz, matrizTransposta);
    
    for(int i=0;i<dimensao; i++){
        
        for(int j=0; j<dimensao;j++){
            printf("%f ", matrizTransposta[i][j]);
        }
        printf("\n");
    }   
    return 0;
}