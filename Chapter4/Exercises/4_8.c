#include <stdio.h>

int main (void) {
  int i;
  int j;
  int Next_multiple;

  i = 365;
  j = 7;
  printf("The next multiple to divide %i evenly by %i is %i\n", i, j, Next_multiple = (i + j) - (i % j));

  i = 12258;
  j = 23;
  printf("The next multiple to divide %i evenly by %i is %i\n", i, j, Next_multiple = (i + j) - (i % j));

  i = 996;
  j = 4;
  printf("The next multiple to divide %i evenly by %i is %i\n", i, j, Next_multiple = (i + j) - (i % j));
  return 0;
}
