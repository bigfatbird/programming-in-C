// Write a program to evaluate the polynomial shown here: 3x^3 - 5x^2 + 6 for x = 2.55.

#include <stdio.h>

int main (void) {
  float x = 2.55;
  float result;

  result = (3 * (x * x * x) - 5 * (x * x) + 6);

  printf("%g\n", result);

  return 0;
}
