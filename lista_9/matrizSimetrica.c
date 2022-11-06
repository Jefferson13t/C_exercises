#include <stdio.h> 
#include <stdbool.h>

bool simetrica(int n, float A[][100]){
    for(int i=0;i<n;i++) {

        for(int j=0;j<n;j++){
            if(A[i][j] != A[j][i]) return false;
        }
    }
    return true;
}

int main() {
    int dimensao;
    float matriz[100][100];

    FILE *f = fopen("matrizQ.txt", "r+t");
        if(f == NULL){
            printf("Erro ao abrir arquivo\n");
            return 1;
        }
    fscanf(f, "%i", &dimensao);

    for(int i=0;i<dimensao;i++){

        for(int j=0;j<dimensao;j++){
            fscanf(f, "%f", &matriz[i][j]);
        }
    }
    simetrica(dimensao, matriz) ? printf("A matriz e simetrica") : printf("A matriz nao e simetrica");

    return 0;
}