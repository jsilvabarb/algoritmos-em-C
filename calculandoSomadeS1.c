#include <stdio.h>

int main() {

	long int numero, soma = 0, potencia=1;

	scanf("%ld", &numero);

	if (numero < 0 || numero >15) {
		printf("NaN\n");
	} else {
		for(int i = 1; i<=numero; i++) {

		potencia = 1;
		for(int j = 0; j<i; j++) {
			potencia = potencia * i;
		}

		//Solução alternativa
		/* potencia = i;
		for(int j = 2; j<=i; j++) {
			potencia = potencia * i;
		} */

		soma = soma + potencia;
	}

	printf("%ld\n", soma);
	}

	return 0;
}