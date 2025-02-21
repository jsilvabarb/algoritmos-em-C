/*
 Ex 2 tarefa 08 Verificar se a matriz é simétrica
*/
#include <stdio.h>
#define MAX 100

int main() {
    int  tamanho, i, j;
    int eSimetrica;
    
    scanf("%d", &tamanho);
    
    int matriz[tamanho][tamanho];
   
    eSimetrica = 1;
    
    //Validando o valor máximo do tamanho
    if(tamanho >= 1 && tamanho <= MAX) {
            
        //Laço que vai ler todos os numeros de entrada e atribuí-los
        //Na matriz "matriz"
        for(i = 0; i < tamanho; i++){
            for(j = 0; j < tamanho; j++){
                scanf("%d", &matriz[i][j]);
                 
            }
        }
        
        //laço para validar simetria
        for(i = 0; i < tamanho; i++){
            for(j = i + 1; j < tamanho; j++){
                
                if(matriz[i][j] != matriz[j][i]){
                    eSimetrica = -1;
                }
            }
        }
        
        if(eSimetrica == 1) {
            printf("%d", 1);
        } else {
            printf("%d", 0);
        }
        
    }
    
    return 0;
}