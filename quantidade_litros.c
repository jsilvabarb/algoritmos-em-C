/* O Joãozinho quer calcular e mostrar a quantidade de litros de combustível gasto em uma viagem, usando um carro que faz 12 Km/L. Para isso, ele gostaria que você o ajudasse por meio de um programa simples. Para realizar o cálculo, é necessário ler o tempo gasto (em horas) e a mesma velocidade média (km/h). Desta forma, você pode obter a distância e, em seguida, calcular quantos litros seriam necessários. Mostre o valor com três casas decimais após o ponto.

Entrada

O arquivo de entrada contém dois inteiros. O primeiro é o tempo gasto na viagem (em horas). O segundo é a velocidade média durante a viagem (em Km / h).

Saída

Imprime quantos litros seriam necessários para fazer esta viagem, com três dígitos após a vírgula. Amostra de entrada Amostra de saída

OBS: Sem "\n"..*/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main() {
    
    // Declarando variáveis
    int tempo, velocidade;
    float distancia;
    float litros;
    
    scanf("%d %d", &tempo, &velocidade);
    
    distancia = tempo * velocidade;
    
    litros = distancia / 12;
    
    printf("Quantidade de Litros: %.3f", litros);  
    
    return 0;
}