/****************************************************************************************************

Basic Math in C

****************************************************************************************************/

#include <stdio.h>
#include <math.h>

#define SALESTAX .1
#define FACTOR 7    // Factor used in Compound Assignment below
#define ANS 2       // Initial Value of ans Variable below  - I am only using #define statements to practice them- they are really not necessary in this program


int main ()
{

/****************************************************************************************************
Part 1 - Compound Assignment

-Assignment Operators are really useful for counter variables
-All mathematical operations in C have corresponding Compound Assignment operators
****************************************************************************************************/

    float ans = ANS;
    int test = 4; // required because modulus assignment (see below) only takes integer values

    printf ("Part 1, Compound Assignment!");

    ans += FACTOR;
    printf ("\n\n% .0f += %d evaluates to %.1f", (ans-FACTOR), FACTOR, ans);

    ans *= FACTOR;
    printf ("\n %.0f *= %d evaluates to %.1f", (ans/FACTOR), FACTOR, ans);

    ans -= FACTOR;
    printf ("\n %.0f -= %d evaluates to %.1f", (ans+FACTOR), FACTOR, ans);

    ans /= FACTOR;
    printf ("\n %.0f /= %d evaluates to %.1f", (ans*FACTOR), FACTOR, ans);

    test %= FACTOR; //Modulus assignment only takes integer values
    printf ("\n %d %= %d evaluates to %d", test, FACTOR, test);


/***************************************************************************************************
Part 2- Typecasting

-C's Typecasting ability allows you to temporarily change the data type of one variable to another
- the format of a typecast is: (dataType)value
***************************************************************************************************/

    int myValue = 5;

    printf("\n\nPart 2, Typecasting!!");

    printf ("\n The value of (float)%d is %f", myValue, (float)myValue);

    printf ("\n The value of (char)%d is %c", myValue, (char)myValue);





return 0;

}
