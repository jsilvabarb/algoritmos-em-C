#include<stdio.h> 

#define TAM 4

int main () {

  int matriz[TAM][TAM];

  printf("Informe os números da matriz:\n");
  for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

   for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
      if(l > c) matriz[l][c] = 0;
    }
  }

   for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
      printf("  %d  ", matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}