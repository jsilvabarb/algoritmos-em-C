/*
Enunciado
Declarar uma matriz 5 x 5 e preencher com 1s a diagonal principal e com
0s os demais elementos. No final, escreva a matriz obtida.
*/

#include<stdio.h>

#define TAM 5
int main() {

  int matriz[TAM][TAM];

  int aux = 0;
  for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
    }
     matriz[l][l] = 1;
     matriz[l][TAM - 1 - l] = 1;
  }

  for(int l = 0; l < TAM; l++) {
    for(int c = 0; c < TAM; c++) {
     printf(" %d ", matriz[l][c]);
    }

    printf("\n");
  }

  return 0;
}