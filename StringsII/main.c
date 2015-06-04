/*************************************************************************************
*
* Strings, Part Deux
*
* This program uses functions in the ctype.h header
* Functions include: isalpha(), isupper(), islower(), isdigit(), puts(), gets()
* These functions check the value of char and return true or false
*************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SSTR 25

int main ()
{
    int hasUpper=0;
    int hasAlpha=0;
    int hasLower=0;
    int hasDigit=0;
    char userChoice;
    char username [SSTR];
    char password [SSTR];

    printf("\nWelcome to the password creator!");
    printf("\nIn this lesson, you will create a password with at least 1 digit, 1 lowercase letter, and 1 uppercase letter");

    do //just need to practice my do-while loops!
    {
/*******************************************************************************************************/


        puts ("Please enter a username:"); 
	/*puts() function can be used in place of printf(), to print strings
         *puts() has less overhead and executes faster than printf()
         *puts() also automatically places a newline at the end of every string
         *however, puts() does not allow for the formating of strings
         */

        gets (username); 
	/* this function shows use of gets(), which can assign a string to a variable
         * gets() allows for spaces to be embedded in a string, which is an advantage over scanf()
         * it is noted that gets() should never be used; gets() does not have a mechanism to prevent buffer overflow
         * if a user types in 40 characters for a string that has been assigned only 10 characters, a buffer overflow will occur
         * this dangerous; fgets() should be used insetead
         */

        printf ("\nWelcome, %s. Please enter a password:", username);/* for strings that need to be formated, printf() is needed
                                                                      */
        gets (password);


/********************************************************************************************************/

        for (int ctr=0; ctr<strlen(password); ctr++)
        {
            printf("\n,Top ctr: %d, hasalpha: %d, hasupper: %d, haslower: %d, hasdigit: %d", ctr, hasAlpha, hasUpper, hasLower, hasDigit);
            hasAlpha += isalpha(password[ctr]); 
		//isalpha() checks if the character is a letter - returns 1024 if true, 0 if false

            hasUpper += isupper(password[ctr]); 
		//isupper() checks if the character is uppercase - returns 256 if true, 0 if false

            hasLower += islower(password[ctr]); 
		//islower() checks if the character is lowercase - returns 512 if true, 0 if false

            hasDigit += isdigit(password[ctr]); 
		//isdigit() checks if the character is a digit - returns 2048 if true, 0 if false

            printf("\n,Bottom ctr: %d, hasalpha: %d, hasupper: %d, haslower: %d, hasdigit: %d", ctr, hasAlpha, hasUpper, hasLower, hasDigit);

        }

        hasAlpha /= 1024;
        hasUpper /= 256;
        hasLower /= 512;
        hasDigit /= 2048;
        // this block of code is necessary because ctype functions do not increment by one
        // rather, they each increment by different numbers, etc, isalpha() returns 1024 if true, 0 if false

        printf ("\n\n Thank you! Your password has %d letters and %d numbers. %d are uppercase letters and %d are lowercase letters.", hasAlpha, hasDigit, hasUpper, hasLower);
        printf ("\nWould you like to go again?");
        scanf (" %c", &userChoice);

    }while(userChoice=='y' || userChoice=='Y'); //be sure to remember the semicolon after while()

    return 0;
}
