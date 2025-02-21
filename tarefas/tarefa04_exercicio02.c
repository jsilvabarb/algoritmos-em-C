/*Escreva um programa que leia um número real e imprima
a terça parte desse número*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    float numero;
    double tercaParte;
    
    scanf("%f", &numero);
    
    //Calculando a terça parte de numero
    tercaParte = numero * 1/3;
    
    printf("%f", tercaParte);
    
    return 0;
}
