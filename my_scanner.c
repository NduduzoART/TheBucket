/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_scanner.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 20:54:39 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include  "library.h"

/* scanf() is a standard input function used to read formatted data from the standard input
 * stream. It uses the header <stdio.h>
 */

int     main()
{
	int value;
        char letter;
	printf("Please input alphabet and number: ");
	scanf("%d", &value);
	scanf("%c", &letter);

	printf("The value is: %d\n", value);
	printf("The letter is: %c\n", letter);
	return (0);
}
