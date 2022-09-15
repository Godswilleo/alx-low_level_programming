#include <stdio.h>

/**
* print_square - print line, line size depends of value of square
* @size: variable to determine the size of square to be drawn
*
*/

void print_square(int size)
{
	int i;
	int j;

	if (size <= 0)
	{
	putchar('\n');
	}
	else
	{
		for (i = 0; i < size; i++)
		{

			for (j = 0; j < size; j++)
			{
				putchar('#');
			}

			putchar('\n');
		}
	}
}
