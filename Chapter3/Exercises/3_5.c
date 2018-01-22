/*
5. Identify the syntactic errors in the following program.
Then type in and run the corrected program to ensure you have correctly identified all the mistakes.
*/

#include <stdio.h>

int main (void) { // needs a curly brace, keyword void shouldn’t be capitalized

  int sum;  // INT was wrong

  /* compute result */    // comment needs to be closed
  sum = 25 + 37 - 19;     // no ; was used at the end of the expression

  /* DISPLAY RESULTS */
  printf("The answer %i\n", sum);     // parameters of the print function not separated by a comma
  return 0;
}


/*
  You should take care of indenting and not overusing comments!
  This example program does a bad job on this
*/
