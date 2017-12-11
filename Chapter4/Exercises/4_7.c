#include <stdio.h>

int main (void) {

  float a = 3.31e-8;
  float b = 2.01e-7;
  float c = 7.16e-6;
  float d = 2.01e-8;
  
  printf("%e\n", (a * b) / (c + d));

  return 0;
}
