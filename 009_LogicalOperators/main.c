/*******************************************************************************************

Logical Operators in C


Below are the three logical operators:
&& - and
|| - or
! - not
*******************************************************************************************/

#include <stdio.h>
#include <string.h> // necessary for strcmp() function

int main ()
{

/*****************************************************************************************/
// Variable declaration Area
// User inputs the value of three variables, and then selects the logical op they would like to perform
// The value of the first two variables are compared to the third in the next section

    int val1 = 0;
    int val2 = 0;
    int val3 = 0;
    char logic_operator[3];

    printf ("It's time to learn logical operators!\n");

    printf ("\nPlease choose a value for val1:");
    scanf ("%d", &val1);

    printf ("\nPlease choose a value for val2:");
    scanf ("%d", &val2);

    printf ("\nNow, please choose a third value to compare val1 and val2 to:");
    scanf ("%d", &val3);

    printf ("\nNow please choose a logical operator.");
    printf ("\nSelect '&&' or 'and' for AND, '||' or 'or' for OR, or '!' or 'not' for NOT!");
    printf ("\nYour logical selection:");
    scanf ("%s", &logic_operator);

/*******************************************************************************************/
// Execution Area
// Depending on logical op selected, user will be directed to different areas of the program

    if ((strcmp(logic_operator, "and")) || (strcmp(logic_operator, "&&")))
    {
        if (val1 == val3 && val2 == val3)
        {
            printf ("AND successful! Both val1 (%d) and val2 (%d) equals val3 (%d).", val1, val2, val3);
        }

        else
        {
            printf ("AND unsuccessful! Either val1 (%d) or val2 (%d) do not equal val3 (%d).", val1, val2, val3);
        }
    }

    else if ((strcmp(logic_operator, "||")) || (strcmp(logic_operator, "or")))
    {
        if (val1 == val3 || val2 == val3)
        {
            ("OR successful! Either val1 (%d) or val2 (%d) was equal to val3 (%d)", val1, val2, val3);
        }

        else
        {
            printf("OR unsuccessful! Both val1 (%d) and val2 (%d) either did or did not equal val3 (%d)", val1, val2, val3);
        }
    }

    else if ((strcmp(logic_operator, "!")) || (strcmp(logic_operator, "not")))
    {
        if (((val1 == val3) != (val2 == val3)) || ((val2 == val3) != (val1 == val3)))
        {
            printf ("NOT successful! Either val1 (%d) or val2 (%d) was equal to val3 (%d), while the other was not!", val1, val2, val3);
        }
        else
        {
            printf ("NOT unsuccessful. Either both val1 (%d) and val2 (%d) or neither equaled val3 (%d)", val1, val2, val3);
        }
    }

    else
    {
        printf("C seems to believe you did not pick an actual logical operator. Better luck next time");
    }

    return 0;


}
