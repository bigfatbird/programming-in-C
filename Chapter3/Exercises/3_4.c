/*
4. Write a program that subtracts the value 15 from 87 and displays the result,
   together with an appropriate message, at the terminal.
*/

#include <stdio.h>

int main (void) {

  int value1 = 15;
  int value2 = 87;

  int result = value2 - value1;

  printf("The result of %i minus %i is %i\n", value2, value1, result);


}
