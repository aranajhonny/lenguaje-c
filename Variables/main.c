#include <stdio.h>
#include <stdlib.h>

int sessionID;
sessionID =00001;

// Initializes a global variable

int main()
{
   int int001_emplid;
   float fl001_weeklySalary;
   float fl002_annualSalary;
   char ch001_firstInitial;
   char ch002_lastInitial;

   /*****************************************************************************************************
      * Initializes five local variables - using local variables is normally preferable to global variables
    ******************************************************************************************************/

   int001_emplid = 427442190;
   fl001_weeklySalary = 4415.00;
   fl002_annualSalary = fl001_weeklySalary * 52.00;
   ch001_firstInitial = 'H';
   ch002_lastInitial = 'T';

/************************************************************************************************************************************************************************
Assigns values to variable; prior to assignment, if you try to print an initialized (but unassigned) variable, the computer will print the variables location in memory *
*************************************************************************************************************************************************************************/

    printf ("\t\tSession ID = %d\n", sessionID);
   printf ("%s\t%s\t%s\t%s\t%s", "Employee ID", "Salary", "Annual Pay", "First Initial", "Last Initial");
   printf ("\n\n%d\t%.2f\t%.2f\t%c\t%c", int001_emplid, fl001_weeklySalary, fl002_annualSalary, ch001_firstInitial, ch002_lastInitial);

/**************************************************************************************************************************************************
*The control characters are as follows:
    %d = integer
    %s = string
    %c = character
    %f = float

*Additionally, the escape sequences used are:

    \t = tab
    \n = newline

***************************************************************************************************************************************************/

    return 0;
}
