/*
Enunciado

Contar e imprimir o número de ocorrências de um número inteiro
fornecido pelo usuário em um dado vetor de inteiros de tamanho variável,
também obtido pelo usuário (Obs.: o tamanho máximo do vetor é 100).
*/

#include <stdio.h>

int main() {

	int tamanho, numero, contador = 0, controle = 0;

	printf("\nInforme o tamanho da lista que deseja computar.\n");

	scanf("%d", &tamanho);

	if(tamanho <= 0 || tamanho > 100){

		printf("Informe um tamanho válido entre 1 -100.\n");
		return 0;
	}

	int listaNumeros[tamanho];

	do{

		scanf("%d", &numero);

		listaNumeros[controle] = numero;

		controle++;
	}while(controle < tamanho);

	for(int i = 0; i < tamanho; i++) {
		for(int j = 0; j < tamanho; j++) {
			if(listaNumeros[j] == listaNumeros[i]) contador++;
		}

		printf("\nO número %d repetiu %d vezes\n", listaNumeros[i], contador);
		contador = 0;
	}
	return 0;
}
