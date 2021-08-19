/*
Código que define se um determinado número é ou não perfeito.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero, cont, soma;
    cont = 1;

    scanf("%d", &numero);
    
    //Laço de repetição 
    while(cont < numero){
        if (numero % cont == 0) {
           soma = soma + cont;
        } 
        cont++;
    }
    
    //Validação
    if (soma == numero){
        printf("sim");
    } else {
        printf("nao");
    }
    return 0;
}
