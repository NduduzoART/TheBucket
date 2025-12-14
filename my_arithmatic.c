/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_arithmatic.c

* Purpose :

* Creation Date : 14-12-2025

* Last Modified : Sun Dec 14 21:13:18 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

/* In c programming an operator is a special symbol that is used to perform operations
 * in values and variables. Like '='
 *
 * Arithmatic:  '+' Addition
 * 		'-' Subtraction
 * 		'*' Multiplication
 * 		'/' Division
 * 		'%' Remainder
 */

int     main(void)
{
	int a = 23;
        int b = 10;
	int sum = a + b;
	int difference = a - b;
	int product = a * b;
	int quotient = a / b;
	int remainder = a % b;
        double x = 30.25;
	double y = 13.09;
	double sum2 = x + y;
        double difference2 = x - y;
        double product2 = x * y;
	double quotient2 = x / y;

	printf("PART ~~ 1 : int\n");
        printf("The sum is: %d\n", sum);
        printf("The difference is: %d\n", difference);
	printf("The product is: %d\n", product);
        printf("The quotient is: %d\n", quotient);
        printf("The remainder is: %d\n", remainder);

        printf("--------------------\n");

	printf("PART ~~ 2 : double\n");
	printf("The sum2 is: %.2lf\n", sum2);
        printf("The difference2 is: %.2lf\n", difference2);
        printf("The product2 is: %.2lf\n", product2);
        printf("The quotient2 is: %.2lf\n", quotient2);

        return (0);
}
