#include <stdio.h>

void soma_matriz(int n, float A[][100],float B[][100],float S[][100]){

    for(int i=0;i<n;i++){

        for(int j=0;j<n;j++){
            S[i][j] = A[i][j] + B[i][j];
        }
    }

}

int main() {
    int dimensaoA, dimensaoB;
    float A[100][100], B[100][100], S[100][100];

    FILE *f = fopen("matriz.txt", "r+t");
        if(f==NULL) {
            printf("Erro ao abrir arquivo matriz.txt");
            return 1;
        }
    FILE *f2 = fopen("matrizQ.txt", "r+t");
        if(f2==NULL) {
            printf("Erro ao abrir arquivo matrizQ.txt");
            return 1;
        }

    fscanf(f, "%i", &dimensaoA);
    fscanf(f2, "%i", &dimensaoB);

    if(dimensaoA != dimensaoB){
        printf("As matrizes nao tem a mesma dimensao, nao e possivel somar");
        return 1;
    }
    
    for(int i=0; i<dimensaoA;i++){
        for(int j=0;j<dimensaoA;j++){
           fscanf(f, "%f", &A[i][j]);
           fscanf(f2, "%f", &B[i][j]);
        }
    }
    soma_matriz(dimensaoA, A,B,S);

    for(int i=0; i<dimensaoA;i++){
        for(int j=0;j<dimensaoA;j++){
           printf("%f\t", S[i][j]);
        }
        printf("\n");
    }

    return 0;
}