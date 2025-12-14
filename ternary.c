/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : ternary.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 21:41:16 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

include "library.h"

int     main()
{
	char operator = '+';
	int num1 = 8;
	int num2 = 7;
	int result = (operator == '+') ? (num1 + num2) : (num1 - num2);

	printf("The result is : %d\n", result);

	return (0);
}
