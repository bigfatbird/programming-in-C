// Implement a printing calculator
// Accepted input + - * / S E

#include <stdio.h>

int main (void)
{
    float accumulator, result;
    char  operator;

    printf ("Begin calculations\n");
    scanf ("%f %c", &accumulator, &operator);
    printf ("= %f\n", accumulator);


    switch (operator)
    {
        case 'S':
            printf ("= %f\n", accumulator);
            break;
        case '+':
            printf ("= %f\n", result += accumulator);
            break;
        case '-':
            printf ("= %f\n", result -= accumulator);
            break;
        case '*':
            printf ("= %f\n", result *= accumulator);
            break;
        case '/':
            printf ("= %f\n", result /= accumulator);
            break;
        default:
            printf ("Unknown operator\n");
            break;
    }
    
    printf ("= %f\nEnd of calculations.\n", result);   

    return 0;
}          
