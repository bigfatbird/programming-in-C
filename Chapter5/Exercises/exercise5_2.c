/* Write a program to generate and display a table of n and n²,
   for integer values of n ranging from 1 to 10.
   Be certain to print appropriate column headings. */

#include <stdio.h>

int main (void)
{
    int n;
    
    printf ("TABLE OF SQUARE NUMBERS\n");
    printf ("   n           n^2 \n\n");
    for ( n = 1; n <= 10; n++ ) {
        printf ("  %2i           %3i\n", n, n * n);
    }

    return 0;
}
