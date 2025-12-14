/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_conversions.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 20:49:06 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

/* Converting on data type to another.
 * Unless specified, conversions follow the order of magnitude.
 * 1 - double (8 bytes)
 * 2 - int (4 bytes)
 * 3 - foat (4 bytes)
 * 4 - char (1 byte)
 */

int     main()
{
	int a = 52;
	char b = '4';

        int answer = a + b;
	printf("The result is: %c\n", a + b);
        printf("The result is: %d\n", a + b);

	return (0);
}
