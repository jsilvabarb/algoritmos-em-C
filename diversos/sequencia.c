#include <stdio.h>

int main () {

    int sum = 0;
    int n;

    scanf("%d", &n);
    while (n >= 0) {
        sum = sum + n;

        if (sum >= 100) {
            sum = 0;
        }
        scanf("%d", &n);
    }

    printf("%d\n", sum);

    return 0;
}