#include "library.h"

int main()
{
	int grade;

	printf("Enter learner grade: ");

	scanf("%d", &grade);

	if (80 <= grade && grade <= 100)
	{
		printf("Level 7 Pass | Outstanding Achievement\n");
	}
	else if (70 <= grade && grade <= 79)
	{
		printf("Level 6 Pass | Meritorious Achievement\n");
	}
	else if (60 <= grade && grade <= 69)
	{
		printf("Level 5 Pass | Substantial Achievement\n");
	}
	else if (50 <= grade && grade <= 59)
	{
		printf("Level 4 Pass | Moderate Achievement\n");
	}
	else if (40 <= grade && grade <= 49)
	{
		printf("Level 3 Pass | Adequate Achievement\n");
	}
	else if (30 <= grade && grade <= 39)
	{
		printf("Level 2 Pass | Elementary Achievement\n");
	}
	else if (0 <= grade && grade <= 29)
	{
		printf("Level 1 Fail | No Achievement\n");
	}
	else if (grade > 100)
	{
		printf("Incorrect Input\n");
	}
	else if (grade < 0)
	{
		printf("Incorrect Input\n");
	}

	return (0);
}
