#include <stdio.h>

/**
* print_most_numbers - prints numbers 0 to 9 excluding 2 and 4
*
*
*/

void print_most_numbers(void)
{
	int i = 0;

	while (i <= 9)
	{

		if (i != 2 && i != 4)
		{
			putchar(i + '0');
		}
		i++;
	}
		putchar('\n');
}