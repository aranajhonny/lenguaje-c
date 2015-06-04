/*********************************************************************************************************

If and Else Statements
Testing Data

*********************************************************************************************************/

#include <stdio.h>
#define CURRENTYEAR 2014

int main ()
{

/********************************************************************************************************
Part 1 - Testing Data
********************************************************************************************************/

    int val1 = 0;
    int val2 = 0;
    int result = 0;

    // C does not have any boolean data types. Using relational operators will always yield two values: 1 if true, or 0 if false
    // Only like values can be compared using relational operators

    printf ("It's time to test some data!");
    printf ("\n Pick your first number:");
    scanf ("%d", &val1);
    printf ("\n Nice job! Now, pick your second number:");
    scanf ("%d", &val2);
    printf("\n Great! Now here we go!");

    result = val1 == val2;
    printf ("\n The result of %d == %d is %d", val1, val2, result);

    result = val1 != val2;
    printf ("\n The result of %d != %d is %d", val1, val2, result);

    result = val1 > val2;
    printf ("\n The result of %d > %d is %d", val1, val2, result);

    result = val1 < val2;
    printf ("\n The result of %d < %d is %d", val1, val2, result);

    result = val1 >= val2;
    printf ("\n The result of %d >= %d is %d", val1, val2, result);

    result = val1 <= val2;
    printf ("\n The result of %d <= %d is %d", val1, val2, result);

/******************************************************************************************************
Part 2 - Using If Statements
******************************************************************************************************/
    int yearborn = 0;
    int age = 0;
    printf ("\n\n\n"); // just putting in some spaces

    // if statements follow the same format: if (condition) {block of code to execute if true;}

    printf ("Alright! Let's go ahead and practice an if statement!");
    printf ("\nPlease enter the year you were born in:");
    scanf ("%d", &yearborn);
    age = CURRENTYEAR - yearborn;

    printf ("After calculations, you are %d years old.\n", age);

    if (age<0)
    {
            printf ("Good God Child, you haven't been born yet!");

    }

    else if (11>age && age>0)    // 'else if' statements only execute if the 'if' statement was false. If the 'if' statement was true, 'else if' will not execute, even if the condition is true
    {
            printf ("You are still a kid! Don't grow up too fast now...");
    }

    else if (age>=11 && age<16)  //&& is the 'and' operator in C, semicolons are only used inside the brackets of an if statement-- the actual conditions do not need a semicolon
    {
            printf ("My, you are getting older! Getting close to getting that driver's license!");
    }

    else if (age>=16 && age<18)  //if... else if... else statements ensure that only one statement is executed
    {
            printf ("You can drive, but you can't smoke. Sorry kid, gotta wait till you graduate high school");
    }

    else if (age>=18 && age<21)
    {
            printf ("You can smoke, drive, fight in a war, go to jail, and pay taxes, but you can't drink legally. How many years left till 21?");
    }

    else if (age>=21 && age <30)
    {
            printf ("Quarter-life crisis. Life blows right now. Sorry.");
    }

    else if (age>=30 && age<50)
    {
            printf ("I've got kids, a wife, a house, and a car. How many days till retirement??");
    }

    else if (age>=50 && age<65)
    {
            printf ("No, for real guys. How many days till retirement?");
    }

    else if (age>=65 && age <90)
    {
            printf ("Retirement. Enjoy it-- you've earned it.");
    }

    else if (age>=90)
    {
            printf ("You are probably dead.");
    }

    else    // else statements will only execute if the proceeding 'if' and 'else if' statements were false
    {
            printf ("Happy first birthday, kiddo.");
    }
printf ("\n\n\n\n");
return 0;

}
