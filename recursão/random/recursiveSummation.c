#include <stdio.h>

int summation (int n) {
  if (n == 1) {
    return 1;
  } else {
    return n + summation(n-1);
  }
}
int main () {
  int n;

  scanf("%d", &n);

  printf("%d\n", summation(n));
}