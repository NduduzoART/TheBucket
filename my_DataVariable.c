/*-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-*\
*                                                                                               *
*       File Name               :       my_DataVariable.c                                       *
*                                                                                               *
*       Creation Date           :       09 Dec 2025                                             *
*                                                                                               *   *                                                                                               *
*       created By              :       Lahlimbazo                                              *
*                                                                                               *   \*-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-*/

#include "my_library.h"

/* In computer programming, a variable is a re usable container for a value, 
 * it behaves as if it were the value it contains.
 *
 * In programming data type specify the type of data that can be stored in a variable
 *
 *
 * Data Type: -> int: whole numbers || 4 bytes %d is used for printing
 * 		 float: single precision decimal number || 4 bytes %f is used
 * 		 double: double precision decimal number || 8 bytes %lf is used
 * 		 char: single character || 1 byte %c is used
 */

int	main()
{
	int age = 31, height = 162;
	float weather = 26.3;
	double cash = 110.99;
	char myLetter = 'L';

	printf("This year, I am: %d years old\n", age);
	printf("Outside the weather is: %fdegrees\n", weather);
	printf("I just got a cash advance of: R%lf\n", cash);
	printf("My first name starts with: %c\n", myLetter);

	return (0);

}
