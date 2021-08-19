/*
Imprimir o numero do termo de acordo com a posicao
da sequência Fibonacci;
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int posicao, anterior, atual, proximo, cont;

    scanf("%d", &posicao);
    
    cont = 3;
    atual = 1;
    anterior = 1;
    
    switch (posicao) {
        case 0: 
            printf("%d", 0);
        break;
        case 1: 
            printf("%d", 1);
        break;
        case 2:
            printf("%d", 2);
        break;
        default:
            while (cont <= posicao){
                proximo = atual + anterior;
                anterior = atual;
                atual = proximo;
                
                cont++;
            }
            printf("%d", proximo);
    }
    return 0;
}
