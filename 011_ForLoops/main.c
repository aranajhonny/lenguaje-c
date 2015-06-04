/*********************************************************************************************************
*
* For Loops
*
* Below is the String Scanner, which demonstrates the power of For-Loops
* I was too lazy to make one, but the book makes a great note about nested for-loops - they function the same as Python
**********************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define STRING 25


int main ()
{
    char userString [STRING];
    char userInput;
    int stringLength;

    printf("Welcome to the String Scanner!");
    printf("\nHere you will be entering a string, and we will tell you the location of each character in the array!");

    do
    {
        printf ("\n\nPlease enter a string:");
        scanf("%s", userString);
        stringLength = strlen(userString);

        for (int counter = 0; counter<stringLength; counter++) //embedded semicolons are required for the initializion and test condition - not for the final expression though
        {
            printf ("\nThe character at byte %d is: %c", counter, userString[counter]);
        }

        printf("\n\nThat was fun! Type 'y' to do it again!");
        scanf(" %c", &userInput); //Remember that the space is required in scanf() when scanning chars

    } while(userInput=='y'||userInput=='Y'); // semicolon is required at the end of the do-while loop


    return 0;
}
