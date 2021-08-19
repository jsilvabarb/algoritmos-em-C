/*
  Escreva um programa que leia um número real e imprima a raiz quadrada
  do número caso ele seja positivo e o quadrado do número
  caso ele seja negativo.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

    float n;
    double raiz, quadrado;
   
    scanf("%f", &n);
    
    if (n > 0) {
        raiz = sqrt(n);
        printf("%f", raiz);
    } else {
        quadrado = pow(n, 2);
        printf("%f", quadrado);
    }
    return 0;
}