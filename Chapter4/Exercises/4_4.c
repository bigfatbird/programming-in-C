/*
  4. Write a program that converts 27° from degrees Fahrenheit (F) to
  degrees Celsius (C) using the following formula:

  C = (F - 32) / 1.8
*/

#include <stdio.h>

int main(void) {

  int F = 27;
  float C;

  C = (F - 32) / 1.8;

  printf("%i degree Fahrenheit is %.3g degree Celsius\n", F, C);

  return 0;
}
