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
	int k;

	for (i = 0; i < 10; i++)
	{

		for (j = 0; j <= 14; j++)
		{
			k = j;
			if (j > 9)
			{
				k = k % 10;
				putchar('1');

			}

			putchar(k + '0');
		}
		putchar('\n');

	}
}
