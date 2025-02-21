/*
     Desafio 01 tarefa 05 C
*/

#include <stdio.h>
#include <stdlib.h>

int main() {
    
    int nJogos, cont, golsF, golsT, fimLista;
    int partidas, vitorias, empates, derrotas, saldoGols;
    int somaGf, somaGt, maiorV, maiorD;
    double pctPartidas, pctVitorias, pctEmpates, pctDerrotas;

    scanf("%d", &nJogos);
    
   maiorV= 0;
   maiorD = 0;
   
    
   //cont = nJogos;
   while(golsF != -1){
       scanf("%d %d", &golsF, &golsT);
       if (golsF > -1) {
           partidas = partidas + 1;
           
           //Qtd vitorias
           if (golsF > golsT) {
               vitorias = vitorias + 1;
               
               if(golsF > maiorV){
                   maiorV = golsF;
               }
           }
           //Qtd empates
           if(golsF == golsT){
               empates = empates + 1;
           }
           //Qtd derrotas
           if(golsT > golsF){
               derrotas = derrotas + 1;
               
               if(golsT > maiorD){
                   maiorD = golsT;
               }
           }
           //Somando gols feitos e tomados
           somaGf = somaGf + golsF;
           somaGt = somaGt + golsT;
       }
   }
    //Fazer -> Porcentagem de partidas analisadas
    pctPartidas =  partidas * ( 100 / nJogos);
    
    //Fazer -> Porcentagem de vitórias analisadas
    pctVitorias = vitorias * ( (double) 100 / partidas);
    
    //Fazer -> Porcentagem de vitórias analisadas
    pctEmpates =  empates * ((double) 100 / partidas);
    
    //Fazer -> Porcentagem de derrotas analisadas
    pctDerrotas = derrotas * ((double) 100 / partidas);
    
    //Fazer -> Saldo de Gols
    saldoGols = somaGf-somaGt; 
    
    //Saídas
    printf("%f\n", pctPartidas);
    printf("%f\n", pctVitorias);
    printf("%f\n", pctEmpates);
    printf("%f\n", pctDerrotas);
    printf("%d\n", saldoGols);
    
    if(pctDerrotas > 0) {
        printf("%d\n", maiorD);
    } else {
        printf("Nao houve derrotas.");
    }
    
    if (pctVitorias > 0) {
        printf("\n%d\n", maiorV);
    } else {
        printf("Nao houve vitorias.\n");
    }
    
    return 0;
}

