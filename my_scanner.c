#include  "library.h"

/*scanf() is a standard input function used to read formatted data from the standard input stream.
 * It uses the header <stdio.h>
 */

int	main()
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
