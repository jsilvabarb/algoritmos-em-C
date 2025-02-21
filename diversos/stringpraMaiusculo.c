#include <stdio.h>

void convmaiuscula(char texto[200]) {
    int qtdLido = 0, qtdConvertido = 0;
    for (int i = 0; texto[i] != '\0'; i++) {
        qtdLido++;
        if(('a' <= texto[i] && texto[i] <= 'z')) {
            texto[i] -= 32;
            qtdConvertido++;
        }
    };
    printf("%s%d\n%d\n", texto, qtdLido-1, qtdConvertido);
}

int main() {
    char palavra[200];
    fgets(palavra, 200, stdin);
    convmaiuscula(palavra);
}