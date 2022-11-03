#include <stdio.h> 


int main() {
	int inicio, fim, ePrimo = 1; 
	
	scanf("%d %d", &inicio, &fim); 

	if(inicio > 0 && fim > 0) {

		while(inicio <= fim) {
			for(int i = 2; i <= (inicio/2); i++) {
				if (inicio % i == 0) {
					ePrimo = -1;
				}
			}

			if(ePrimo == 1) {
				printf("%d ", inicio);
			} 

			ePrimo = 1;
			inicio++;
		}
		printf("\n");
	}

	return 0;
}