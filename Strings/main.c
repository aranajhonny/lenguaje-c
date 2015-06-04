#include <stdio.h>
#include <string.h>
/* the string.h library is needed for the strcpy() function */

int main ()
{

/***********************************************************************************************************************************/
    // String Variable Initialization

    char myString1 [15] = "Hello World!";
    // the above is the first method used to assign a string

    char myString2 [] = "Goodbye world; I shall never see thee again!";
    // By leaving the number field blank [] , C will automatically create an array the size of the string you specify

    char myString3 [25];
    // By assigning a length to the array but not setting a value, you can give the variable a value later by using the strcpy () function (see below)

    char myString4 [6];
    // By assigning a length to an array but not specifying a value, you can also assign a string by assigning each element a char (see below)

/**********************************************************************************************************************************/
    // Strcpy - assigning string values after the fact

    strcpy (myString3, "Nevermind world, I'm back again");

    // strcpy () is the only method to assign a string value to a variable after initialization
    // performing something like myString3 = "Nevermind world"; will raise an error with the compiler (try it if you dare)

/**********************************************************************************************************************************/
    //Assigning a string to a variable - Character by Character

    myString4[0]='A';
    myString4[1]='d';
    myString4[2]='i';
    myString4[3]='o';
    myString4[4]='s';
    myString4[5]='\0'; // \0 is the null zero (aka the ASCII 0)-- all strings end with the null zero, which is what C uses to determine that the string is at an end

    //the above method is arguably the most inconvenient method to assign a string to a variable- but definitely feasible
/**********************************************************************************************************************************/
    //Printing your string for the whole world to see

    printf ("\nThe value of myString1 is: %s", myString1);
    getchar ();
    printf ("\nThe value of myString2 is: %s", myString2);
    getchar ();
    printf ("\nThe value of myString3 is: %s", myString3);
    getchar ();
    printf ("\nThe value of myString4 is: %s", myString4);
    getchar ();

    return 0;

}
