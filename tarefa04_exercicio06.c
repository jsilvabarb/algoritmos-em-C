/*Escreva um programa que leia o valor da hora aula, o nª de aulas 
dadas no mês e o percentual de desconto do INSS e imprima 
o valor do salário líquido do professor*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {

   int nAulas, percentualDesc;
   float valorHora;
   double salarioLiquido, salarioBruto, descontoINSS;
   
    scanf("%f %d %d", &valorHora, &nAulas, &percentualDesc);
    
    //Calculando valor do salário bruto
    salarioBruto = valorHora * nAulas;
    
    //Calculando valor do salário líquido 
    descontoINSS = salarioBruto * (double) percentualDesc/100;
    
    salarioLiquido = salarioBruto - descontoINSS;
   
    printf("%f", salarioLiquido);

    return 0;

}