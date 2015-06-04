/*********************************************************************************

Using the Scanf () Function

*********************************************************************************/

#include <stdio.h>

#define SSTR 25 //small string
#define LSTR 100 //large string
#define PROMPT1 "Please enter your first name:"
#define PROMPT2 "Please enter your last name:"
#define PROMPT3 "Please enter your age:"
#define PROMPT4 "Now please enter your full address:"

int main ()
{
    char firstName[SSTR];
    char lastName[SSTR];
    int age;
    char streetNumb [SSTR];
    char streetName [SSTR];
    char streetType [SSTR];
    char city [SSTR];
    char state [SSTR];
    char zip [SSTR];



    printf ("%s", PROMPT1);
    scanf ("%s", firstName); //no ampersand is required because lastName is pointer (strings in C are character arrays, and arrays are merely pointers)

    printf ("%s", PROMPT2);
    scanf ("%s", lastName); //no ampersand is required because lastName is pointer (strings in C are character arrays, and arrays are merely pointers)

    printf ("%s", PROMPT3);
    scanf ("%d", &age); // scanf requires the ampersand, unless the variable is a pointer. Since the two string values above are arrays (and therefore pointers), no Ampersand is required

    // it is important to note that scanf() stops reading data after the first Space or Newline Character
    // multiple scanf() statements are required to receive data with spaces or newlines in it

    printf ("%s", PROMPT4);
    scanf ("%s", streetNumb);
    scanf ("%s", streetName);
    scanf ("%s", streetType);
    scanf ("%s", city);
    scanf ("%s", state);
    scanf ("%s", zip);

    // each scanf receives an additional part of the data after each spaces

    printf ("Your name is %s %s and you are %d years old!", firstName, lastName, age);
    printf ("Additionally you live at: \n %s %s %s \n %s %s, %s", streetNumb, streetName, streetType, city, state, zip);

    return 0;

}
