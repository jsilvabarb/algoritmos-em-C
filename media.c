#include <stdio.h> 

int main() {
	float numero, media, cont = 1.0, soma = 0.0;

	do {

		scanf("%f", &numero);

		if(numero != -1) {
			soma = soma + numero;
		
			cont++;
		}
	} while(numero != -1);

	media = soma / (cont - 1);

	printf("A média total de %.2f é: %.2f\n", soma, media);
}
