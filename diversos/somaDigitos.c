#include <stdio.h>

int main() {
	int numero, centena, dezena, unidade, resto, soma;

	scanf("%d", &numero);
	centena = numero / 100;
	resto = numero % 100;

	dezena = resto / 10;
	unidade = resto % 10;

	soma = centena + dezena + unidade;

	printf("A soma dos dígitos do número informado é: %d\n", soma);
}