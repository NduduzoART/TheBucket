/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_bool.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 21:26:56 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

/* bool is a data type that can only hold one of two values: true or false.
 * These values are often represented as 1 and 0, in more numeric contex,
 * states like: on or off. It uses the header <sdtbool.h>
 *
 * if and else statement is a core dicision making structure that allows your program
 * to execute diferent blocks of code based on whether a given condition evaluate
 * to true (non-zero) or false (zero)
 */

int     main()
{
	bool myGrade = false;

	if (myGrade)
	{
		printf("You Passed\n");
	}
	else
	{
		printf("You failed\n");
	}

	return (0);
}
