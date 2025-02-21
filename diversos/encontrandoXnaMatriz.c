#include<stdio.h>

#define TAM 20
int main () {
    
  int matriz[TAM][TAM], linha, coluna, x;
  int encontrouX = 0;
  printf("Digite um número x:\n");
  scanf("%d", &x);

  printf("Digite os números para a matriz:\n");
  for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
      if(matriz[l][c] == x) {
        encontrouX = 1;
        linha = l;
        coluna = c;
      }
    }
  }

  if(encontrouX) {
    printf("\nLocalização de X na matriz:\n\tlinha: %d - coluna: %d\n", linha, coluna);
  } else {
    printf("\nNão encontrado\n");
  }
  return 0;
}