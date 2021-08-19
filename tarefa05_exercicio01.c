/*
  Escreva um programa que leia dois números inteiros e efetue a soma deles.
  Caso a soma seja maior que 20 acrescentar 8 a soma, caso contrário
  subtrair 5 da soma.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    int numero1, numero2, soma;
   
    scanf("%d %d", &numero1, &numero2);
    
    
    soma = numero1 + numero2;
            
    if (soma > 20) {
        soma = soma + 8;
    } else {
        soma = soma - 5;
    }
    
    printf("%d", soma);

    return 0;
}
