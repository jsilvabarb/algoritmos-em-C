#include <stdio.h>

/* --------------- 1ª Tentativa ---------------------------
    // Não considerei os múltiplos de 5 e estava calculando o n! completo

    int factorial(int n) {
        if (n == 1 || n == 0) {
            return 1;
        } else {
            return n * factorial(n - 1);
        }
    }
    int trailingZeroes(int n) {
        int factorialValue = factorial(n);
        int cont = 0;
        while (factorialValue % 10 == 0) {
            cont++;
            factorialValue = factorialValue / 10;
        }
        return cont;
    }

    -------------- 2ª Tentativa -------------------------
    Aqui não considerei quantas vezes conseguiria dividir i por 5

    int trailingZeroes(int n) {
    int cont = 0;

    if (n == 0) {
        return cont;
    }

    int i;
    
    for (i = 1; i <= n; i++) { 
        if (i % 5 == 0) {
            cont++;
        }
    }
    
    return cont;
}
*/

int trailingZeroes(int n) {
    int cont = 0;
    if (n == 0) {
        return cont;
    }

    int i;
    int aux;
    
    for (i = 1; i <= n; i++) {
       
        aux = i;
        while(aux % 5 == 0) {
            cont++;
            aux = aux / 5;
        }
    }  
    return cont;
}

int main () {
    int n;

    scanf("%d", &n);

    printf("%d\n", trailingZeroes(n));

    return 0;
}