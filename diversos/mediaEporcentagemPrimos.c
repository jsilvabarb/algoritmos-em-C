#include <stdio.h>

int main() {

	int nInicial, nFinal, ePrimo = 1, cont = 0, soma =0;

	scanf("%d %d", &nInicial, &nFinal);

	for(int i = nInicial; i <= nFinal; i++) {
		for(int j = 2; j<=i/2; j++) {
			if(j % i == 0) {
				ePrimo = -1;
			}
		}

		if(ePrimo == 1) {
			printf("%d\n", i);


			soma = soma + i;
			cont++;
		}
		ePrimo = 1;
	} 

	printf("%d\n", soma);
	printf("A média de números primos no intervalo de %d a %d é: %2.f\n", nInicial, nFinal, (float)soma/(float)cont);
	return 0;
}