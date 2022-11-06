#include <stdio.h> 

void identidade(int n, float A[][100]) {

    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            A[i][j] = (i == j) ? 1 : 0;            
        }
    }
}

int main(){
    int dimensao;
    float matriz[100][100];

    FILE *f = fopen("matrizQ.txt", "r+t");
        if(f==NULL) {
            printf("Erro ao abrir arquivo\n");
            return 1;
        }

    fscanf(f, "%i", &dimensao);

    for(int i=0; i<dimensao; i++){
  
        for(int j=0; j<dimensao; j++){
            fscanf(f, "%f", &matriz[i][j]);
        }
    }
    identidade(dimensao, matriz);

    for(int i=0; i<dimensao; i++){
  
        for(int j=0; j<dimensao; j++){
            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }


    return 0;
}