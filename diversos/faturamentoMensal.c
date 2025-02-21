/*
Enunciado

Um armazém trabalha com 20 mercadorias diferentes identificadas pelos
números de 1 a 20. O dono do armazém anota a quantidade de cada
mercadoria vendida durante o mês. Ele tem uma tabela que indica para
cada mercadoria o preço de venda. Calcular o faturamento mensal com
base nas vendas e no preço de cada item.
*/

#include<stdio.h>

#define TAM 20
int main() {

	int produtos[TAM][2];

	//As mercadorias são identficadas pelos números de 1 a 20

	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < 2; j++){
			produtos[i][j] = i +1;

			if(j == 1) {
				produtos[i][j] = i * 5;
			}
		}
	}


	for(int i = 0; i < TAM; i++) {
		for(int j = 0; j < 2; j++){
			printf(" %d  \t", produtos[i][j]);
		}
		printf("\n");

	}
	return 0;
}