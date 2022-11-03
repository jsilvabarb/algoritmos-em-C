#include<stdio.h> 

int main () {

  int matriz[4][5], soma = 0, somaLinha[4]; 

  for(int l = 0; l < 4; l++) {
    for(int c = 0; c < 5; c++) {
      scanf("%d", &matriz[l][c]);
    }
  }

  printf("\nA matriz digitada: \n ");
  for(int l = 0; l < 4; l++) {
    for(int c = 0; c < 5; c++) {
      printf("  %d  ", matriz[l][c]);
    }
    printf("\n");
  }

  for(int l = 0; l < 4; l++) {
    for(int c = 0; c < 5; c++) {
      soma = soma + matriz[l][c];
    }
    somaLinha[l] = soma;
    soma = 0;
  }
  
  printf("A soma das linhas da matriz resultou em: \n");
  
  for(int i = 0; i < 4; i++) {
      printf("%d\n", somaLinha[i]);
  }

  for(int i; i < 4; i++) {
    soma = soma + somaLinha[i];
  }

  printf("\nA soma total é: %d\n", soma);
  return 0;
}