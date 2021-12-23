/*Escreva um programa que calcule as raízes reais de uma equação de segundo grau, ou emita uma mensagem caso as mesmas não existam.

OBS: Sem acentos e "\n".*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int a, b, c;
    float x1, x2;
    float delta;
    
    scanf("%d %d %d", &a, &b, &c);
    
    delta = pow(b, 2) - 4*(a * c);
    
    if(delta < 0){
        printf("Não existem raízes.");
    } else if(delta == 0){
        printf("Raiz 1: %.1f", x1);
    }else {
        x1 = (-b + sqrt(delta)) / 2 * a;
        x2 = (-b - sqrt(delta)) / 2 * a;
        
        printf("Raiz 1: %.1f, Raiz 2: %.1f.", x1, x2);
    }
    
    return 0;
}