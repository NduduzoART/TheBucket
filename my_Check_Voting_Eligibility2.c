/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_Check_Voting_Eligibility2.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 21:03:56 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

/* Ternary Operator - can be used to replace if-else statement in certain situations
 * to make our cofde look
 * cleaner.
 * Syntax: test_condition ? expression1 : expression2;
 */

int     main()
{
	int age;

	write(1, "Enter age: ", 12);
	scanf("%d", &age);

	(age >= 18) ? write(1, "You are eligible to vote\n", 30) : write(1, "You are not eligible to vote\n", 30);

	return (0);
}
