/*
Código que realiza a multiplicação de dois valores
utilizando apenas as operações de soma e Subtração
*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    int n1, n2, cont, multiplicacao, resultado;

    scanf("%d %d", &n1, &n2);
    
    multiplicacao = n1 * n2;
    cont = 0;
    
    if (multiplicacao < 0) {
        //Operação de Subtração
        while(cont != multiplicacao) {
            cont = cont - 1;
            resultado = cont;
        }
        printf("%d", resultado);
    } else {
        //Operação de Adição
        while(cont <= multiplicacao) {
            resultado = cont;
            cont = cont + 1;
        }
        printf("%d", resultado);
    }
    
    return 0;
}
