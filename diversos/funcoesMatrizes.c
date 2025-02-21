#include<stdio.h>
 
#define TAM_MAX 100
 
int matriz[TAM_MAX][TAM_MAX], matrizQuadrado[TAM_MAX][TAM_MAX], matrizProduto[TAM_MAX][TAM_MAX];
 
void leituraMatriz(int dimensaoMatriz) {
  
    for (int i = 0; i < dimensaoMatriz; i++) {
        for (int j = 0; j < dimensaoMatriz; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
}
 
void quadradoElementosMatriz (int dimensaoMatriz) {
    int potencia = 1;
 
    for (int i = 0; i < dimensaoMatriz; i++) {
        for (int j = 0; j < dimensaoMatriz; j++) {
            for (int z = 0; z < 2; z++) {
                potencia *= (int) matriz[i][j];
            }
            matrizQuadrado[i][j] = potencia;
            potencia = 1;
        }
    }
}
 
void multiplicaMatriz (int dimensaoMatriz) {
    for (int i=0; i < dimensaoMatriz; i++){
        for (int j=0; j < dimensaoMatriz; j++){
            matrizProduto[i][j] = 0;
            for (int k=0 ; k < dimensaoMatriz; k++){
                matrizProduto[i][j] += matriz[i][k]*matrizQuadrado[k][j];
            }
        }
    }
 
}
 
int tracoMatriz (int dimensaoMatriz) {
    int tracoMatriz = 0;
 
    for (int i = 0; i < dimensaoMatriz; i++) {
        for (int j = 0; j < dimensaoMatriz; j++) {             
        }
        tracoMatriz = tracoMatriz + matrizProduto[i][i];
    }
 
    return tracoMatriz;
}
 
void imprimeMatriz (int dimensaoMatriz) {
 
   
    for (int i = 0; i < dimensaoMatriz; i++) {
        for (int j = 0; j < dimensaoMatriz; j++) {
            printf("%d ", matrizQuadrado[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    for (int i = 0; i < dimensaoMatriz; i++) {
        for (int j = 0; j < dimensaoMatriz; j++) {
            printf("%d ", matrizProduto[i][j]);
        }
        printf("\n");
    }
 
}
 
int main () {
    int dimensaoMatriz;
 
    scanf("%d", &dimensaoMatriz);
 
    leituraMatriz(dimensaoMatriz);
    quadradoElementosMatriz(dimensaoMatriz);
    multiplicaMatriz(dimensaoMatriz);
    imprimeMatriz(dimensaoMatriz);
    printf("\nTraco: %d\n", tracoMatriz(dimensaoMatriz));
 
    return 0;
}