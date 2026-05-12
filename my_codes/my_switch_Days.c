/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_switch.c

* Purpose :

* Creation Date : 15-12-2025

* Last Modified : Mon Dec 15 21:59:10 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

/* switch statement in c is a control flow mechanism that allows
 * you to exercute different code blocks based on the value
 * of a single intergral expression.
 * It provides a cleaner and more efficient alternative to long
 * chains of if-else if statement when comparing a varriable
 * against multiple constant values.
 */

int	main(void)
{
	int number;

	printf("Enter the number 1 to 7: ");
	scanf("%d", &number);

	switch(number)
	{
		case 1:
		printf("Sunday\n");
		break;

		case 2:
		printf("Monday\n");
		break;

		case 3:
		printf("Tuesday\n");
		break;

		case 4:
		printf("Wednesday\n");
		break;

		case 5:
		printf("Thursday\n");
		break;

		case 6:
		printf("Friday\n");
		break;

		case 7:
		printf("Saturday\n");
		break;

		default:
		printf("Incorrect value\n");
	}
}
