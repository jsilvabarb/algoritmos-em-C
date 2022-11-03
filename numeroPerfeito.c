#include <stdio.h> 

int main() {
	int numero, soma = 0;


	scanf("%d", &numero);

	for(int i = 1; i < numero; i++) {

		if(numero % i == 0) {
			soma = soma + i;	
		}
		
	}

	if(soma == numero) {
		printf("O número %d é perfeito!\n", numero);
	} else {
		printf("O número %d não é perfeito :'(!\n");
	}
	return 0;
}