#include <stdio.h>

// Objetivo, implementar exponenciação quadrática para reduzir as chamadas recursivas

double powAux (double x, int n) {
    if (n == 0) {
        return 1;
    } else if (n == 1) {
        return x;
    } else {
        int aux = n;
        if (n < 0) {
            aux = aux * (-1);
        };
        return x * powAux(x, aux-1);
    }
}

double myPow(double x, int n) {
    
    double powResult = powAux(x, n);

    if (n < 0) {
        return 1 / powResult;
    }

    return powResult;    
}
int main () {
    double x;
    int n;

    scanf("%lf%d", &x, &n);

    printf("%.5f\n", myPow(x,n));

    return 0;
}