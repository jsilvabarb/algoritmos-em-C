/*Em 2004, um garoto chamado Mark Zuckerberg implementou 
um programa de computador para realizar uma funcionalidade muito interessante 
para o site de relacionamento dele, o FACEBOOK. Esse programa 
tinha como objetivo encontrar os Mutual Friends ou “Amigos em 
Comum”entre dois usuários. Uma vez que Mark tinha a lista de 
amigos de cada usuário do site, bastou comparar as listas entre 
si e o resultado foi a lista de amigos em comum. Se estivesse 
em 2004 e sr. Mark Zuckerberg pedisse para que você escrevesse 
esse programa, como você resolveria esse problema? Considere 
que sua função receberá como entrada 2 listas inteiras 
preenchidas (l1 e l2) de tamanho 10 e a saı́da será uma
outra lista (l3) com os valores em comum entre as duas listas.*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    // Declarando variáveis
    int listaUm[10];
    int listaDois[10];
    int listaMutual[10];
    int aux = 0;
    int cont = 0;
    int indice = 0;
    int temAmigosEmComum = -1;

    for(int i =0; i < 10; i++) {
        scanf("%d", &listaUm[i]);
       
    }
    for(int i =0; i < 10; i++) {
         scanf("%d", &listaDois[i]);
    }
    
    //comparando cada número da listaUm com os valores da listaDois
    while(aux < 10) {
        if(listaUm[aux] == listaDois[cont]){
            listaMutual[indice] = listaUm[aux];
            temAmigosEmComum = 1;
            indice++;
        } 
        cont++;
        if(cont == 10 ) {
            cont = 0;
            aux++;
        }
    }
    
    if(temAmigosEmComum == -1) {
        printf("Nao tem amigos em comum.");
    } else {
        for(int i = 0; i < indice; i++) {
            printf("%d ", listaMutual[i]);
        }
    }
     return 0;
}