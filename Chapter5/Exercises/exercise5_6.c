/*  A minus sign placed in front of a field width specification causes the field
    to be displayed left-justified. 
    Substitute the following printf statement for the corresponding 
    statement in Program 5.2, run the program, and compare the outputs pro-
    duced by both programs.
    
         printf ("%-2i%i\n", n, triangularNumber);


    I think Mr. Kochan made a Typo here and meant Program 5.3 or 5.3A, at least in my
    book he asked to work with program 5.2!
*/

// Program to generate a table of triangular numbers

#include <stdio.h>

int main (void)
{
    int n, triangularNumber;

    printf ("TABLE OF TRIANGULAR NUMBERS\n\n");
    printf (" n    Sum from 1 to n\n");
    printf ("---   ---------------\n");

    triangularNumber = 0;
    
    for ( n = 1; n <= 10; ++n ) {
         triangularNumber += n;
         printf ("%-2i          %i\n", n, triangularNumber);
    }

    return 0;
}
