/***************************************************
 *
 * 016 - Arrays
 * Harry Geoffrey Trebing
 * May 14, 2015
 * 
 **************************************************/

#include <stdio.h>
#include <stdlib.h>
#define msg "\nThe size of %s, with %d elements, is: %d"	

int main ()
	{

	int intArray[] = {1, 2, 3, 4, 5}; //brackets can be used to initialize an array with values
					  //when values are assigned during declaration, the size of
					  //the array does not need to be specified

	float fltArray[5] = {0.0};        // this is used to 'zero-out' an array
		                          // all the values of fltarray are now 0	
					  // Note: this trick can only be used when an array is declared	
	fltArray[0] = 4.8;
	fltArray[1] = 5.1;
	fltArray[2] = 9.2;
	fltArray[3] = 2.2;
	fltArray[4] = 1.6;
	//arrays can also be assigned values one at a time

	
	char charArray[5]={'h', 'e', 'l', 'l', 'o'};
	//because Null Zero is not included, charArray is simply an array of chars
	//not a string
	//string functions, like puts() or strlen() cannot be used with charArray
	
	char strArray[5]={'h', 'o', 'l', 'a', '\0'};
	//because Null Zero is included as the last element, strArray is a string
	//string functions can be used on strArray, like strlen()
	
	printf("Welcome to the Size-of-Array program!");
	printf("\nHere, we will demonstrate the sizes of various arrays.");
	printf(msg, "intArray", 5, sizeof(intArray));
	printf(msg, "fltArray", 5, sizeof(fltArray));
	printf(msg, "charArray", 5, sizeof(charArray));
	printf(msg, "strArray", 5, sizeof(strArray));

	return 0;
	}

/* Notes
 *
 * all arrays must contain elements of the same data type
 * 
 *
 */
