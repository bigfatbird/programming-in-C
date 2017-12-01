/*
    Write a program that asks the user to type in two integer values at the ter-
    minal.
    Test these two numbers to determine if the first is evenly divisible by 
    the second, and then display an appropriate message at the terminal.
*/

#include <stdio.h>

int main (void)
{
    int value1, value2;

    printf ("Type in your first integer number please: ");
    scanf ("%i", &value1);
    printf ("Now please type in another integer number: ");
    scanf ("%i", &value2);

    if ( value1 % value2 == 0 )
        printf ("The numbers are evenly divisible!\n");
    else
        printf ("The numbers are not evenly divisible!\n");

    return 0;
}
