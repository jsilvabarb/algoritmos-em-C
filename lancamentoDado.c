#include <stdio.h> 
#include <stdlib.h>

int main() {

	int n, f1=0, f2=0, f3=0, f4=0, f5=0, f6=0;
	int dado;
	
	scanf("%d", &n);

	for(int i = 0; i < n; i++) {

		//aqui vai ser gerado um número aleatório
		dado = rand() % 6 ;
		switch (dado) {
			case 1: f1++;
			case 2: f2++;
			case 3: f3++;
			case 4: f4++;
			case 5: f5++;
			case 6: f6++;
		}
	}

	printf("\tFace 1: %2.f", 100.0*((float)f1/(float)n));
	printf("\tFace 1: %2.f", 100.0*((float)f2/(float)n));
	printf("\tFace 1: %2.f", 100.0*((float)f3/(float)n));
	printf("\tFace 1: %2.f", 100.0*((float)f4/(float)n));
	printf("\tFace 1: %2.f", 100.0*((float)f5/(float)n));
	printf("\tFace 1: %2.f", 100.0*((float)f6/(float)n));


	return 0;
}