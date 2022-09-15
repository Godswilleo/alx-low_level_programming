#include <stdio.h>

/**
* more_numbers - prints 10lines of numbers 0 to 14
*
*
*/

void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			printf("%d",j);
		}
		putchar('\n');

	}
}
