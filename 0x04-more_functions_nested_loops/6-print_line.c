#include <stdio.h>

/**
* print_line - print line, line lengh depends of value of n
* @n: variable to determine the length of line to be drawn
*
*/

void print_line(int n)
{
	int i = 0;

	if (n <= 0)
	{
	putchar('\n');
	}
	else
	{
		while (i < n)
		{
			putchar('_');
			i++;

		}
		putchar('\n');
	}
}
