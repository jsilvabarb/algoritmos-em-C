#include <stdio.h>

int main() {
	int numero,  anterior, atual, proximo;;

	scanf("%d", &numero);

	atual = 1;
  anterior = 1;


	for (int i= 0; i <= numero; i++) {

		if(i >= 3) {
			proximo = atual + anterior;
	    anterior = atual;
	    atual = proximo;	
		} else {
			proximo = i;
		}
		printf(" %d,", proximo);
	}

}
