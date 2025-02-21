#include <stdio.h>

int main() {
	double x, s=1, termo, numerador, denominador, pot = 2, fat = 1, sinal = -1;

	scanf("%lf", &x);

	for(int i = 1; i <= 20; i++) {

		numerador = 1;
		for(int p = 1; p <= pot; p++) {
			numerador = numerador * x;
		}
		pot += 2;

		
		denominador = 1;
		for(int d = 1; d<=fat; d++) {
			denominador = denominador * (double)d;
		}
		denominador += 2;

		termo = numerador / denominador;

		//Intercalando sinal da operaçao entre (-) e (+)
		s = s + sinal*termo;
		sinal = sinal*(-1);
	}

	printf("Valor de s: %lf\n", s);
	return 0;
}


/* Versão Alternativa com somente 1 For
#include <stdio.h>

int main() {
	double x, s=1, termo, numerador=1, denominador=1, pot = 2, fat = 1, sinal = -1;

	scanf("%lf", &x);

	for(int i = 1; i <= 20; i++) {

		numerador = numerador*x*x;
		
		denominador = denominador * fat * (fat-1.0);
		fat = fat + 2;

		termo = numerador / denominador;

		//Intercalando sinal da operaçao entre (-) e (+)
		s = s + sinal*termo;
		sinal = sinal*(-1);
	}

	printf("Valor de s: %lf\n", s);
	return 0;
}
*/
