#include "library.h"

int	main()
{
	int a = 12;
	double b = 5.5;

	int result_1 = a + 3;
	double result_2 = b - a;
	double result_3 = b/2;
	double result_4 = a * b;
	int remainder = a%8;

	printf("The addition result in: %d\n", result_1);
	printf("The subtraction result in: %.2lf\n", result_2);
	printf("The multiplication result in: %.2lf\n", result_3);
	printf("The division result in: %.2lf\n", result_4);
	printf("The remainder is: %d\n", remainder);

	return (0);
}
