/*
 Ex 2 tarefa 07
*/
#include <stdio.h>
int i,j,a, cont;
int main() {

    int  numero, i,vezes;
    scanf("%d", &numero);
    
    int conjunto[numero];
    
    vezes=0;
    cont=0;
    
    if (numero >= 1 && numero <= 100){
        for(i=0;i<numero;i++){
            scanf("%d", &conjunto[i]);
            
        }
        for(i=0;i < numero;i++){
            vezes=1;
            a=conjunto[i];
            for(j=0; j < numero; j++){
                if(a==conjunto[j]&&i!=j&&a!=0){
                    vezes++;
                    conjunto[j]=0;
                }
            }
            if(a!=0){
                printf("%d ",conjunto[i]);
                printf("%d\n", vezes);
            }
        }
    }
    
    return 0;
}