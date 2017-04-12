/*
    Write a program that accepts two integer values typed in by the user. 
    Display the result of dividing the first integer by the second, 
    to three-decimal-place accuracy.
    Remember to have the program check for division by zero.
*/

#include <stdio.h>

int main (void)
{
    int number1, number2;
    float result;

    printf ("Type in your first integer here: ");
    scanf ("%i", &number1);
    printf ("Type in another integer now: ");
    scanf ("%i", &number2);

    
    if ( number2 == 0)
        printf ("Division by 0! Error!\n");
    else
        printf ("%i divided by %i is %.3f\n", number1, number2,
                result = (float) number1 / number2);
    

    return 0;
}
