/********************************************************************************************************************************
*
* Case Switch
*
*
*Case-Switch functions like a stripped-out version of if-else
*Case-Switch executes faster and is more readable, but is less flexible than if-else
*Case-Switch can only compare values in cases to the variable listed in switch
*Also, Case-Switch statements cannot be nested, unlike if-else -- it confuses the compiler and the program probably won't run
*Anything more complex than this will need to be given to if-else
*Also, be wary when using floats and doubles with Case-Switch
*********************************************************************************************************************************/

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>



int main ()
{
    int userLat = 0;  // user's Latitude (North-South)
    int userLong = 0; // user's Longitude (East-West)
    char userLatQuad [6];
    char userLongQuad [5];
    char userDir; // direction user want's to go in
    int userDist; // distance user wants to go in
    char userChoice; // used to determine if the user wants to quit

    printf ("\nWelcome to the basic exploration program!");

    do
    {
        printf("\nPlease enter the direction and distance you want to go in:");
        scanf(" %c", &userDir);
        scanf("%d", &userDist);

        switch (userDir) //Based on compiler error messages, it seems that switch-case only accepts ints or single chars - no strings!
                         //This is possibly because C cannot compare strings without the strcmp() function
        {
            case('n'): //Unfortunately, complex logic doesn't work in case-switch --- case("n"||"N") is not legal!
                                userLat += userDist;
                                break;
            case('N'): //remember that single quotes -- '' -- indicate chars. Double quotes -- ""-- indicate strings and can't be used in switch-case!
                                userLat += userDist;
                                break;
            case('w'):
                                userLong -= userDist;
                                break;
            case('W'):
                                userLong -= userDist;
                                break;
            case('e'):
                                userLong += userDist;
                                break;
            case('E'):
                                userLong += userDist;
                                break;
            case('s'):
                                userLat -= userDist;
                                break;
            case('S'):
                                userLat -= userDist;
                                break;
        }

        if (userLat>0)
        {
            strcpy(userLatQuad, "North"); //Remember that strcpy() is needed to assign values to strings!!!
        }
        else
        {
            strcpy(userLatQuad, "South");
        }
        if (userLong>0)
        {
            strcpy(userLongQuad, "East");
        }
        else
        {
            strcpy(userLongQuad, "West");
        }

        printf ("\n\nYou are now %d meters %s by %d meters %s", userLat, userLatQuad, userLong, userLongQuad);

        printf ("\n\nDo you wish to continue?");
        scanf (" %c", &userChoice);


    } while (userChoice != 'n');

    exit(1);

    return 0;
}
