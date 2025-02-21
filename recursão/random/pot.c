#include <stdio.h>

/*
    Digamos que a = 2, b = 4

    pot(2, 4) => pot(2, 3) => pot(2, 2) => pot(2, 1) Chegamos ao caso base em que b = 1

    2 * 8 = 16  <= 2 * 4 = 8  <= 2 * 2 = 4 <= 2 * 1 = 2 Então desempilhamos
*/

int pot (int a, int b) {
    if (b == 1) {
        return a;
    } else if (b == 0) {
        return 1;
    } else {
        return a * pot(a, b-1);
    }
}
int main () {

    int a, b;

    scanf("%d%d", &a, &b);

    printf("%d\n", pot(a,b));

    return 0;
}