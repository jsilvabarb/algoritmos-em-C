#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int maiuscula(char c) {
    return 'A' <= c && c <= 'Z';
}

int letra(char c) {
    return !(('a' <= c && c <= 'z') || maiuscula(c));
}

int verificaSeExiste(int c) {

}

int main() {
    char str[1000], letrasUnicas[1000];
    int ocorrenciasLetra[1000];
    fgets(str, 1000, stdin);
    int cont = 0, totalSimbolos = 0, encontrou = 0, aux = 97, c = 0, d = 0;
    int tam = strlen(str);
     strcpy(str, letrasUnicas);



    for(int i = 0; i < str[i] != '\0'; i++) {
        if (letra(str[i])) totalSimbolos++;
		for(int j = 0; j < str[i] != '\0'; j++) {
			if(str[j] == str[i]) cont++;
		}

		printf("\n%c - %d\n", str[i], cont);

		cont = 0;
	}

    while(c < tam) {
        if(str[c] == letrasUnicas[d])
            str[c] = letrasUnicas[d];
        else {
            str[c+1] = letrasUnicas[d];
            c++;
        }
        d++;
    }

    for(int i=0; i < tam; i++) {
        printf("%c\n", letrasUnicas[i]);
    }
    

    return 1;
}