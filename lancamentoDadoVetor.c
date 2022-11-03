#include <stdio.h>
#include <stdlib.h>
#include <time.h>

//Refatorando o algoritmo de lançamento de dados 
//Aplicando vetores para simplificar a solução

#define TAMANHO 6

int main () {

	int faces[TAMANHO], dado, n, probabilidade, sorteio, face;

	//Zerando todas as posições do vetor
	for(int i = 0; i < TAMANHO; i++) faces[i] = 0;
	
	scanf("%d", &n);

	for(int i = 0; i < TAMANHO; i++) {

		//aqui vai ser gerado um número aleatório
		sorteio = rand() % 6;

		if (sorteio < probabilidade) dado = face - 1;
		else {
			do {
				dado = rand() % 6;
			} while (dado == face-1);
		}
		faces[dado]++;
	}

	for(int i = 0; i < 6; i++) {
		printf("\tFace %d: %2.f \n", i + 1, 100.0*((float)faces[i]/(float)TAMANHO));
	}

	
	return 0;

}