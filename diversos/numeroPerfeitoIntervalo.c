#include <stdio.h> 

int main() {

	int inicio, fim, soma =0;

	scanf("%d %d", &inicio, &fim);

	while(inicio <= fim) {
		for(int i = 1; i < inicio; i++){
			if(inicio % i == 0) {
				soma = soma + i;	
			}
		}
		if(soma == inicio) {
			printf("O número %d é perfeito! \n", inicio);
		}
		inicio++;
		soma = 0;
	}
	return 0;
}