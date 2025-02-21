/*Escreva um programa que leia um número inteiro com 3 dígitos
e mostre o algarismo da casa das dezenas*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
   int numero, dezena, resto;
    
    scanf("%d", &numero);
    
    //retirando a centena e salvando o resto
    resto = numero % 100;
    
    //pegando o algarismo da dezena
    dezena = resto / 10;
    
    printf("%d", dezena);
    
    return 0;
}
