/*
 * 017 Searching Arrays
 * Harry Geoffrey Trebing
 * May 15, 2015
 *
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>

//--------------------------------------------
//Variable Definition
//Declares Parallel Arrays
//See more info about parallel arrays below

char firstName[5][15] =
	{
	"Benjamin",
	"Alexander",
	"George",
	"Thomas",
	"James"
	};

char lastName[5][15] =
	{
	"Franklin",
	"Hamilton",
	"Washington",
	"Jefferson",
	"Madison",
	};

float acctBalance[5] =
	{
	100.47,
	51.29,
	400.21,
	20.00,
	5.51
	};

//--------------------------------------------

int returnBalance (int ID)
	{
	
	printf("\nHello %s %s! Your balance is: %f", firstName[ID], lastName[ID], acctBalance[ID]);
	return 0;
	}

//--------------------------------------------

int returnID ()
	{
	
	char localLastName [20];
	char localFirstName [20];
	int ID=6;
		
	printf("\nPlease enter your last name:");
	scanf(" %s", &localLastName);
	printf("\nPlease enter your first name:");
	scanf(" %s", &localFirstName);
	
	for (int ctr1=0; ctr1<5; ctr1++)
		{
		
		if(!(strcmp(localLastName, lastName[ctr1]) && strcmp(localFirstName, firstName[ctr1])))
			//strcmp() returns 0 if true, throwing off the if-loop (yeah, its wierd, I know)
			//the !(strcmp()) is needed to get the correct value, since if expects 1 if true
			{
			
			ID = ctr1;
			printf("\nLoop ID: %d", ID);
			break;
			}
		}
	printf("\nFinal ID: %d", ID);
	return ID;
	}

//--------------------------------------------

int main ()
	{

	int varID = 0;
	printf("***Account Balance Check***");
	varID =returnID();
	returnBalance(varID);
	return 0;
	}
/*
 * Notes
 *
 * No new C features are introduced in this program
 * Rather, this program illustrates how to use *parallel* arrays
 * Parallel arrays are a technique that can be used to create database-like constructs
 *
 */
