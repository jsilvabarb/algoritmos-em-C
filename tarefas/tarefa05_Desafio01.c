/*
Desafio 1 Tarefa02: Calculadora.
*/
#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int a, b;
    char sinal;  
   
    scanf("%c %d %d ", &sinal, &a, &b);
    
    if (sinal == '+'){
        printf("%d", a + b);
    } else if (sinal == '-'){
        printf("%d", a - b);
    } else if (sinal == '*'){
        printf("%d", a * b);
    } else if (sinal == '/'){
        if(b == 0){
            printf("Divisao por zero.");
        } else {
            printf("%d,%d", a/b, a%b);
        }
    } else {
        printf("Operacao invalida.");
    }
    return 0;
}
