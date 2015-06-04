/*******************************************************************************************

Code Repeat: While Loop in C




- there are two forms of the 'While' Loop in C:
- 'While...' and 'Do...While'
- similar to while loops in Python, at some point the While loop must fufil the condition
- else, the while loop will continue indefinately


********************************************************************************************/

#include <stdio.h>
#define OUTPUT "\nThe value is now: %d"

int main ()
{

    int startValue;
    int finalValue;
    int incrementValue;
    char userChoice;
    char userOperation;

    do
    {

        printf ("\nPlease choose a starting value:");
        scanf ("%d", &startValue);

        printf ("\nPlease choose a final value:");
        scanf ("%d", &finalValue);

        printf ("\nPlease choose an increment value:");
        scanf ("%d", &incrementValue);

        printf ("\nPlease choose an operation.");
        printf ("\n*A for Addition*\n*S for Subtraction*\n*D for Divide*\n*M for Multiply*");
        printf ("\nYour choice:");
        scanf (" %c", &userOperation); //Remember that a space is needed for scanf with Characters, because scanf() is retarded

        if (userOperation == 'A' && startValue<finalValue)
        {
            while (startValue<finalValue)
            {
                printf(OUTPUT, startValue); //Use the Macro OUTPUT, which is defined at the top of the program
                startValue += incrementValue;
            }
        }

        else if (userOperation == 'M' && startValue<finalValue)
        {
            while (startValue<finalValue)
            {
                printf(OUTPUT, startValue);
                startValue *= incrementValue;
            }
        }

        else if (userOperation == 'S' && startValue>finalValue)
        {
            while (startValue>finalValue)
            {
                printf(OUTPUT, startValue);
                startValue -= incrementValue;
            }
        }

        else if (userOperation == 'D' && startValue>finalValue)
        {
            while (startValue>finalValue)
            {
                printf(OUTPUT, startValue);
                startValue /= incrementValue;
            }
        }

        else
        {
            printf("The operations you entered where not valid or incompatible. Aborting...");
        }

        printf ("\nThe while loop is now over. If you would like to start again, please enter 'y':");
        scanf (" %c",&userChoice);

    } while (userChoice == 'y' || userChoice == 'Y'); //will accept lower and upper case Y

    return 0;

}
