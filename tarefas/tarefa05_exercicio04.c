/*
 Escreva um programa que leia três números inteiros
 referentes ao segmento de reta e determine se o triangulo
 é isóceles, equilátero, escaleno ou inválido.
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

   int a, b, c;
   
    scanf("%d %d %d", &a, &b, &c);
    
    if (a > 0 && b > 0 && c > 0) {
        //Validando triangulo
        if(a < ( b + c )){
            if(b <( a +c )){
                if(c < ( a + b )){
                    //Verificando se é isoceles
                    if ((a == b) || (a == c) || (b == c) ){
                        //Verificando se é equilátero
                        if ((a == b) && (b == c)){
                            printf("equilatero");
                        } else {
                            printf("isoceles");
                        }
                    //Caso não seja nem isoceles nem equilatero é escaleno
                    } else {
                        printf("escaleno");
                    }
                } else {
                    printf("invalido");
                }
            } else {
                printf("invalido");
            }
        } else {
            printf("invalido");
        }
    } else {
        printf("invalido");
    }
    return 0;
}
// inicio
//     inteiro: a, b, c;
    
//     leia(a, b, c);
    
//     //Verificando se o triangulo é inválido, isoceles, equilátero ou escaleno.
    
//     se (a > 0) e (b > 0) e (c > 0) entao
//         inicio
//             //Condições para o triangulo ser valido
//             se (a < ( b + c )) entao
//                 se (b < ( a + c )) entao
//                     se (c < ( a + b )) entao
//                         inicio
                            
//                             //Verificando se é isoceles, ou seja, dois lados iguais
//                             se (a = b) ou (a = c) ou (b = c) entao
//                                 inicio
//                                 //Verificando se é equilatero, ou seja, todos os lados iguais
//                                     se (a = b) e (b = c) entao 
//                                         escreva("equilatero");
//                                         senao 
//                                         escreva("isoceles");
//                                     fimse;
//                                 fim;
//                                 senao
//                                 //Caso as condições não sejam atendidas, conclui-se que o triangulo é escaleno, todos os lados diferentes
//                                     escreva("escaleno");
//                             fimse;
//                         fim;
                        
//                         // Caso nenhuma condição seja verdade entao triangulo invalido
//                         senao 
//                             escreva("invalido");
//                     fimse;
//                     senao 
//                         escreva("invalido");
//                 fimse;
//                 senao 
//                     escreva("invalido");
//             fimse;
//         fim;
//         senao 
//             escreva("invalido");
//     fimse;
// fim.