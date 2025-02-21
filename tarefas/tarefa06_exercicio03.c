/*
Número triangular?
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int numero, cont, eTriangular;
    
    
    cont = 1;

    scanf("%d", &numero);
    
    //Verificando se o número é multiplo de numeros consecutivos
    while(cont * (cont+1)*(cont + 2) <= numero){
        if (( cont * (cont+1)*(cont + 2) )== numero) {
            eTriangular = 1;
        } else {
            eTriangular = -1;
        }
        cont++;
    }
    
    if (eTriangular == 1){
        printf("sim");
    } else {
        printf("nao");
    }
    return 0;
}