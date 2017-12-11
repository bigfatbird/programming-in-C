#include <stdio.h>

int main (void) {
  char c, d;

  c = 'd';
  d = c;
  printf("d = %c\n", d); // yields d = d

  return 0;
}
