/*Escreva um programa que leia o preço à prazo de um produto
e devolva como saída o preço à vista com desconto de 9%*/


#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
   float precoPrazo;
   double precoAvista, desconto;
    
    scanf("%f", &precoPrazo);
    
    //Calculando valor do desconto do produto
    desconto = precoPrazo * 0.09;
    
    //Calculando preço à vista
    precoAvista = precoPrazo - desconto;
    
    printf("%f", precoAvista);
    
    return 0;
}
