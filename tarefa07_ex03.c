/*
 Ex 2 tarefa 07
*/
#include <stdio.h>
int i,j,a, cont;
int main() {

    int  numero, i,vezes, n;
    scanf("%d", &numero);
    
    int conjuntoUM[numero], conjuntoDOIS[numero];
    int multVetor[numero];
    
    vezes=0;
    cont=0;
    
    if (numero >= 1 && numero <= 100){
        vezes = numero + numero;
        for(i=0; i < vezes ; i++){
            
            //Armazenando os valores aos vetores
            scanf("%d", &n);
            if(i < numero){
                conjuntoUM[i] = n;
            } else{
                conjuntoDOIS[cont] = n;
                cont++;
            }
        }
        
        for(j=0; j < numero; j++){
            //Mltiplicando os valores de mesmo indice
            multVetor[j] = conjuntoUM[j] * conjuntoDOIS[j];
            printf("%d ", multVetor[j]);
        }
      
    }
    
    return 0;
}