/*

Write a program that takes an integer keyed in from the terminal and extracts and displays each digit of the integer in English. So, if the user types in 932, the pro- gram should display
nine three two
Remember to display “zero” if the user types in just a 0. (Note: This exercise is a hard one!)

*/


#include <stdio.h>

int main(void) {

    int number;

    int placeholder;

    int number_reversed = 0;

    int trailingzerocounter = 0;

    _Bool middleOfNumber = 0;

    printf("Which Number: ");

    scanf("%i", &number);

    if (number == 0) {
        printf("zero");
    } else {

        while ( number != 0) {
            placeholder = number % 10;
            if (placeholder == 0) {
                if (middleOfNumber == 0) {
                    trailingzerocounter++;
                }
            }


            if (placeholder != 0) {
                middleOfNumber = 1;
            }
            number /= 10;



            number_reversed += placeholder;
            if (number == 0) {
                break;
            }
            number_reversed *= 10;
        }

        while (number_reversed != 0) {
            placeholder = number_reversed % 10;
            number_reversed /= 10;

            switch (placeholder) {
                case 1:
                    printf("one ");
                    break;
                case 2:
                    printf("two ");
                    break;
                case 3:
                    printf("three ");
                    break;
                case 4:
                    printf("four ");
                    break;
                case 5:
                    printf("five ");
                    break;
                case 6:
                    printf("six ");
                    break;
                case 7:
                    printf("seven ");
                    break;
                case 8:
                    printf("eight ");
                    break;
                case 9:
                    printf("nine ");
                    break;
                case 0:
                    printf("zero ");
                    break;

                default:
                    break;
            }
        }

        while (trailingzerocounter != 0) {
            printf("zero ");
            trailingzerocounter--;
        }
    }

    printf("\n");

    return 0;
}
