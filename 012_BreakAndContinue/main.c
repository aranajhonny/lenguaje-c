/*****************************************************************************************************
*
*   Break and Continue Statements
*
* Break Statements can be used to prematurely end for-loops and while-loops
* Continue Statements will force the for-loop or while-loop back to the top to execute another iteration
* Using Continue causes everything past continue in the loop to be ignored
* See my program below for examples
*****************************************************************************************************/


#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
// I don't really need all these libraries - I just want to practice include statements

int main ()
{

    int current_year;
    int current_pop;

    float birth_rate;
    float death_rate;
    float migration_rate;

    int current_birth; // holds net births from the past year
    int current_death; // holds net deaths from the past year
    int current_migration; //holds net migration from the past year

    char userChoice;

    printf("\nToday we are going to simulate population growth for a fictional country!");

    printf("\nTo begin, please enter the current year:");
    scanf ("%d", &current_year);

    printf("\nNow, please enter the current population:");
    scanf ("%d", &current_pop);

    printf("\nNow, please enter the birth rate:");
    scanf ("%f", &birth_rate);

    printf ("\nNow, please enter the death rate:");
    scanf("%f", &death_rate);

    printf("\nPlease enter the net migration rate:");
    scanf("%f", &migration_rate);

    for (int year=0; year<100; year++) // will calculate for the next 100 years
    {
        current_year+=1;
        current_birth = current_pop*birth_rate;
        current_death = current_pop*death_rate;
        current_migration = current_pop*migration_rate;

        current_pop += current_birth;
        current_pop -= current_death;
        current_pop += current_migration;

        printf("\n\n In the year %d, your country had the following demographics:", current_year);
        printf("\nTotal Population: %d", current_pop);
        printf("\nLive Births in the Past Year: %d", current_birth);
        printf("\nDeaths in the Past Year: %d", current_death);
        printf("\nMigration over the Past Year: %d", current_migration);

        printf("\n\nDo you want to continue to next year? Select 'Y' or 'y' to continue:");
        scanf(" %c", &userChoice);  //Don't forget the space when scanning chars with scanf()

        if (userChoice == 'y' || userChoice == 'Y')
        {
            continue; // if the user enters 'y' or 'Y', for-loop will continue
            printf("\n\nTHIS IS A TEST"); // if you notice, this printf() is ignored during the execution of the program -- continue forces everything back to the top of the loop
        }

        else
        {
            break; //break will cause for-loop to exit, resuming the program
                   // This is useful - instead of embedding a while-loop in the for-loop (aka while(userChoice ='y')), break statements can terminate prematurely
        }
        printf("I will never be executed!! MUAHAHAHAHA!!");
        // This is because of preceding break and continue statements
        //break causes the loop to end - if break is used, this statement will not execute
        //continue forces the loop back to the top, ignoring all code underneath -- if continue is used, this statement will not execute.


    }

    return 0;

}
