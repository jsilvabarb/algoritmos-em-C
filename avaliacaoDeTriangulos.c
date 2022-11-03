#include <stdio.h>

int main() {
	int s1, s2, s3, quadradoS1, quadradoS2, quadradoS3;

	scanf("%d %d %d", &s1, &s2, &s3);

	quadradoS1 = s1 * s1;
	quadradoS2 = s2 * s2;
	quadradoS3 = s3 * s3;


	if (s2 + s3 > s1) {
		//É triângulo

		if (quadradoS1 == quadradoS2 + quadradoS3) {
			printf("Os valores informados formam um triângulo retângulo.\n");
		} else if ( quadradoS1 > quadradoS2 + quadradoS3) {
			printf("Os valores informados formam um triângulo obtusângulo\n");
		} else if (quadradoS1 < quadradoS2 + quadradoS3) {
			printf("Os valores informados formam um triângulo acutângulo\n");
		}

	} else {
		printf("Os valores informados nao formam um triângulo.\n");
	}
	return 0;
}