#include <stdio.h>

int main()
{
    printf("At the end of this sentence, %d alarm bells will sound!\a\a\a\a\a\a", 6);

    // \a is the Escape Char for an alarm bell (doesn't always work) and %d is the conversion char for an int.

    printf ("\n\n\n\n At the start of this %s are %.3f newline characters!", "sentence", 4.000);

    //\n will generate a newline in C - %s is the string conversion char and %f is the conversion char for a float

    printf ("\n\t%s\t%s\t%s", "Column A", "Column B", "Column C");

    //\t creates a tab char

    printf ("\n\t%.2f\t%.2f\t%.2f", 4.273, 4.231, 9.00);

    //Notice how lines 9 and 11 have an equal number of tabs between data. Despite this, the data does not line up in the console output.

    return 0;
}
