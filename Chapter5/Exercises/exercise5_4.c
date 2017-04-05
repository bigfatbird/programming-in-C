/*  
    The factorial of an integer n, written n!, is the product of the
    consecutive integers 1 through n . For example, 5 factorial is calculated as

    5! = 5 x 4 x 3 x 2 x 1 = 120

    Write a program to generate and print a table of the first 10 factorials.
*/

#include <stdio.h>

int main (void)
{

    int n, factorial;

    factorial = 1;

    printf ("TABLE OF THE FIRST TEN FACTORIAL NUMBERS\n\n");
    printf ("  n  |      n!\n");
    printf ("-----+----------\n");
    /*
     * factorial 0 is 1 per definition!
     * 
     * You could also solve that with an if else construct seen in later chapters
    */
    printf ("  0  |         1\n");  

    for ( n = 1; n <= 10; n++ ) {
        factorial *= n;
        printf (" %2i  |   %7i\n", n, factorial);
    }

    return 0;
}
