#include <stdio.h>

int main() {
    float matriz[100][100];
    int linhas, colunas;

    FILE* f=fopen("matriz.txt", "r+t");
    if(f == NULL) {
        printf("Erro ao abrir arquivo\n");
        return 1;
    }

    fscanf(f, "%i %i", &linhas, &colunas);

    for(int i=0; i< linhas; i++){

        for(int j=0; j< colunas; j++) {

            fscanf(f, "%f", &matriz[i][j]);
        }
    }
    for(int i=0; i< linhas; i++){

        for(int j=0; j< colunas; j++) {

            printf("%f ", matriz[i][j]);
        }
        printf("\n");
    }
    return 0;
}