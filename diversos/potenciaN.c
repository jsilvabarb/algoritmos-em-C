#include <stdio.h> 

int main() {

	int numero, potencia, resultado;

	scanf("%d %d", &numero, &potencia);

	resultado = 1;

	for(int i = 1; i<=potencia; i++) {
		resultado = resultado * potencia;
	}

	printf("O resultado é: %d", resultado);

}