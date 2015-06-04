/***************************************************************
Preprocessor Directives - the #include statement

**************************************************************/

// Preprocessor Directives always include the pound sign -- #
// The include PD does nothing more than a file merge command, meaning that you can create your own header files and include them

#include <stdio.h> // C's default header files can be included
#include <string.h>
#include "new.txt" // when making your own header files, you need to use quotation marks around the file
// Quotation marks instruct C to check the disk directory where this program is being stored-- if no results are found, C will then check the built-in #include directory
// If you add a header file with quotes, the file should be a text document containing C code

/***************************************************************
Preprocessor Directives - the #define statement

***************************************************************/

// the #define PD is used to define constants, also known as literals (aka, a data value that does not change)
// #define syntax always follows the same format: #define ConstantName ConstantValue
// the #define statement is not like a variable; C merely finds every instance of ConstantName and replaces it with ConstantValue

#define PI 3.14159
#define YEAR 2014



int main ()
{
    printf("%d \n", myVar); //myVar is defined in new.txt, which is included at the top of the program
    float result;
    result = (myVar + YEAR) * PI;
    printf ("%f", result);

    return 0;
}
