/*Escreva um programa, que calcule a quantidade de fatores primos (Omega) de um número desejado positivo. Formalmente, se a decomposição de n em fatores P primos resulta em p1^α1 p2^α2...pk^αk , queremos Omega(n) = SOMATORIO(αi). Por exemplo, n = 20 = 2^2 5^1, assim Omega(20) = 2 + 1 = 3. Informalmente, queremos saber 
quantas vezes um valor pode ser dividido por números primos.*/



#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    // Declarando variáveis
    int numero;
    int cont = 2;
    int indice = 0;
    int listaNumeros[1000000];
    int ePrimo = 1;
    int n = 0;

    scanf("%d", &numero);
    
    n = numero;
    
    //inserindo números primos no vetor
    for(int i = 2; i <= numero; i++) {
       
        while(cont < i && ePrimo == 1) {
            
            if (i == 2) {
                ePrimo = 1;
            } else if (i % cont == 0 ) {
                ePrimo = -1;
            }
            
            cont++;
        }
        
        if(ePrimo == 1) {
            listaNumeros[indice] = i;
            
            indice++;
            
        }
        
        cont = 2;
        ePrimo = 1;
    }
    
   cont = 0;
   
    //fatorando o número da entrada pelos números primos do vetor
    for(int j = 0; j < indice; j++) {
       
        if (numero % listaNumeros[j] == 0) {
            numero = numero / listaNumeros[j];
            cont++;
           
        }

    }
    //verificando se o último resultado da divisão é 1
   if(numero != 1) {
       printf("Omega(%d)=%d", n, cont + 1);
   } else {
        printf("Omega(%d)=%d", n, cont);
   }    
    
    return 0;

}