/*
 Ex 1 tarefa 08
*/
#include <stdio.h>
#define MAX 100

int main() {
    int  linhas, colunas, i, j, n;
    
    scanf("%d %d", &linhas, &colunas);
    
    int numeros[linhas][colunas], numerosT[colunas][linhas];
    
    //Validando o valor máximo de linhas e colunas
    if(linhas >= 1 && linhas <= MAX) {
        if(colunas >= 1 && colunas <= MAX){
            
            //Laço que vai ler todos os numeros de entrada e atribuí-los
            //Na matriz "numeros"
            for(i = 0; i < linhas; i++){
                for(j = 0; j < colunas; j++){
                    scanf("%d", &n);
                    numeros[i][j] = n;
                }
            }
            
            //Atribuindo os valores da matriz "numeros" a sua transposta
            for(i = 0; i < linhas; i++){
                for(j = 0; j < colunas; j++){
                    
                    numerosT[j][i] = numeros[i][j];
                }
            }
            
            //Imprimindo a matriz transposta
            for(i = 0; i < colunas; i++){
                for(j = 0; j < linhas; j++){
                    printf("%d", numerosT[i][j]);
                    printf(" ");
                }
                printf("\n");
            }
        }
    }
    
    return 0;
}