/*Escreva um programa que leia uma temperatura em Celsius
e imprima uma temperatura em fahrenheits*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main () {
    float temperaturaC;
    double temperaturaF;
    
    scanf("%f", &temperaturaC);
    
    //Transformando de Celsius para fahrenheits
    
    temperaturaF = (temperaturaC * 1.8) + 32 ;
    
    printf("%1f", temperaturaF);
    
    return 0;
}