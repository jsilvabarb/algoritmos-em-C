#include <stdio.h>

int main() {
	int numero, fatorial = 1;

	scanf("%d", &numero);

	if (numero < 0) {
		printf("NaN\n");
	} else {
		for(int i = 1; i <= numero; i++) {
			fatorial = fatorial * i;
		}
		printf("%d\n", fatorial);
	}
}
