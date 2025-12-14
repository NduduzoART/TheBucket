/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_Check_Voting_Eligibility.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 20:58:55 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

int     main()
{
	int age;

        printf("Please enter your age: ");
        scanf("%d", &age);

	if  (age >= 18)
	{
		printf("You are eligible to vote\n");
	}
	else
	{
		printf("You are not eligible to vote\n");
	}

	return (0);
}
