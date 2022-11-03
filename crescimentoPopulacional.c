#include <stdio.h>

#define DT 0.1
int main() {

	float n0, n, r, T, t=0, DN;
	int cont = 0;

	printf("Digite a população inicial:\n");
	scanf("%f", &n0);
	printf("\nDigite a tax:\n");
	scanf("%f", &r);
	printf("\nPor quanto tempo?\n");
	scanf("%f", &T);

	for(t=DT; t<=T; t+=DT) {
		DN = r*n*DT;
		n = n + DN;
		if(cont == 50) {
			cont = 0;
			printf("%2.f -> %2.f\n", t, n);
		}
		cont++;
	}

	return 0;
}
