/* -.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.-.

* File Name : my_Calculator.c

* Purpose :

* Creation Date : 15-12-2025

* Last Modified : Tue Dec 16 06:32:22 2025

* Created By : Lahlimbazo 

_._._._._._._._._._._._._._._._._._._._._.*/

#include "library.h"

int	main(void)
{
	char operator;
	printf("Choose an operator ['+', '-', '*', '/']: ");
	scanf("%c", &operator);

	double num1, num2;

	printf("Enter first number: ");
	scanf("%lf", &num1);	

	printf("Enter second number: ");
	scanf("%lf", &num2);

	double result;

	switch(operator)
	{
		case '+':
		result = printf("%.2lf\n", num1 + num2);
		break;

		case '-':
		result = printf("%.2lf\n", num1 - num2);
		break;

		case '*':
		result = printf("%.2lf\n", num1 * num2);
		break;

		case '/':
		result = (num2 != 0) ? printf("%.2lf\n", num1 / num2) :
		printf("error: Division by zero is not allowed\n");
		/*if (num2 != 0)
		{
			result = printf("%.2lf\n", num1 / num2);
		}
		else
		{
			printf("error: Division by zero is not allowed\n");
		}*/
		break;

		default:
		printf("error: unkown operation!\n");
	}
}
