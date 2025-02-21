/*
  Read a value N. Calculate and write its corresponding factorial. Factorial of N = N * (N-1) * (N-2) * (N-3) * ... * 1.

  Input
  The input contains an integer value N (0 < N < 13).

  Output
  The output contains an integer value corresponding to the factorial of N.
*/

#include <stdio.h>

int factorial (int n) {
  if (n == 1 || n == 0) {
    return 1;
  } else {
    return n * factorial(n -1);
  }
}

int main () {

  int n;

  scanf("%d", &n);

  int factorialValue = factorial(n);

  printf("%d\n", factorialValue);

  return 0;
}