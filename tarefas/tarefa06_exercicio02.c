/*
Número primo?
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero, cont, ePrimo;
    
    
    cont = 2;
    ePrimo = 1;

    scanf("%d", &numero);
    
    //verificando se o nmr é ou não primo
    while(cont < numero && ePrimo){
        if ((numero % cont) == 0) {
            ePrimo = -1;
        }
        cont++;
    }
    
    if (numero == 1) {
        ePrimo = -1;
    }
    
    if (ePrimo == 1){
        printf("sim");
    } else {
        printf("nao");
    }
    return 0;
}