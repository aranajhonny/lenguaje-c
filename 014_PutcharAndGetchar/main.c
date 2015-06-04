/*************************************************************************
*
* Data Entry II
* getchar(), putchar(), getch(), and putch()
*
* getch() and putch() are Windows-specific functions and could not be used
* in Linux
**************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define SSTR 25 //defines small strings
#define LSTR 50 //defines large strings


int main ()
{
    //in this program, we are going to receive and print input without printf() and scanf()
    //You will notice that this program is a lot longer than other data entry programs
    //It also
    char firstName [SSTR];
    char lastName [SSTR];
    char msg1 [] = "Please enter your first name:";
    char msg2 [] = "Please enter your last name:";
    char tempChar;
    int strLength;

    strLength = strlen(msg1);

    for (int ctr=0; ctr<strLength; ctr++)
    {
        putchar(msg1[ctr]); //putchar() places one character on the screen at a time -- a for loop seems needed to
    }

    for (int ctr=0; ctr<SSTR; ctr++)
    {

        tempChar = getchar();// Getchar() reads input one character at a time and also returns it to the screen


        if (tempChar == '\n')
        {
            break;
        }

        else
        {
            firstName[ctr]=tempChar;
        }
    }

    for (int ctr=0; ctr<strLength; ctr++)
    {
        putchar(msg2[ctr]);
    }

    for (int ctr=0;ctr<SSTR; ctr++)
    {
        tempChar = getchar();

        if (tempChar == '\n')
        {
            break;
        }
        else
        {
            lastName[ctr] = tempChar;
        }
    }

    printf("\n\nThank you for playing! Your name is %s %s", firstName, lastName);

    return 0;
}
