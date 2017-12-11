#include <stdio.h>

int main (void) {

  int Int = 1; // watch out, confusing
  // int char = 2; char is a reserved word
  // int 6_05 = 3; variables cannot start with a number
  int Calloc = 4; // watch out here as well. https://en.wikipedia.org/wiki/C_dynamic_memory_allocation
  int Xx = 5;
  int alpha_beta_routine = 6;
  int floating = 7; // don't confuse it with a float
  int _1312 = 8;
  int z = 9;
  int ReInitialize = 10;
  int _ = 11;
  int A$ = 12; // this works, but gives a warning

  printf("%i\n", Int);
}
