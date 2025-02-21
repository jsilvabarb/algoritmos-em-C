/*

Enunciado
Ler dois vetores de tamanho 10 com valores ordenados crescentemente e
criar um terceiro também ordenado, que será a junção dos dois vetores de
entrada. Por exemplo, se os dois vetores lidos forem: v1 = [1, 3, 10, 20,
50, 55, 60, 78, 90, 100] e v2 = [0, 2, 4, 12, 23, 50, 51, 56, 61, 62]; o
terceiro vetor será v3 = [0, 1, 2, 3, 4, 10, 12, 20, 23, 50, 50, 51, 55, 56,
60, 61, 62, 78, 90, 100].

*/

#include<stdio.h>

#define TAM 10
#define TAMDOBRO 20
int main() {


	int listaUm[TAM], listaDois[TAM], listaTres[TAMDOBRO];

	for(int i =1; i <= TAM; i++) {
		listaUm[i-1] = i;
		listaDois[i-1] = i * 2;
	}

	for(int j =0; j< TAMDOBRO; j++) {
		if(j <= 9) {
			listaTres[j] = listaUm[j];
		} else {
			listaTres[j] = listaDois[j-TAM];
		}
	}

	for(int z = 0; z < TAMDOBRO; z++) {
		printf("\n Indice[%d] - %d\n", z, listaTres[z]);
	}
	return 0;
}