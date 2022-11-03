#include <stdio.h>

int main() {

	int numero, soma = 0, potencia=1, fatorial = 1;

	scanf("%d", &numero);

	for(int i = 1; i<=numero; i++) {

		fatorial=1;
		for(int z = 1; z <= i; z++) {
			fatorial = fatorial * z;
		}

		printf("%d\n", fatorial);

		potencia = 1;
		for(int j = 0; j<fatorial; j++) {
			potencia = potencia * fatorial;
		}

		soma = soma + potencia;
	}

	printf("O valor de S1 é igual -> %d", soma);

	return 0;
}