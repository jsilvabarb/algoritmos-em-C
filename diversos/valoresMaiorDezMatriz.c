#include<stdio.h>

#define TAM 6
int main () {

  int matriz[TAM][TAM], cont = 0;

  
  for(int l = 0; l < TAM; l++) {
    for(int c =0; c < TAM; c++ ) {
      scanf("%d", &matriz[l][c]);
    }
  }

  for(int l = 0; l < TAM; l ++) {
    for(int c = 0; c < TAM ; c++) {
      if(matriz[l][c] > 10) cont++;
    }
  }

  printf("Na matriz informada existem %d números maiores do que 10, \n São eles:\n", cont);
  for(int l = 0; l < TAM; l ++) {
    for(int c = 0; c < TAM ; c++) {
      if(matriz[l][c] > 10) printf("\t%d", matriz[l][c]);
    }
    printf("\n");
  }
  return 0;
}