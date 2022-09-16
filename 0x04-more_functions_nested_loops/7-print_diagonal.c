#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal line
* Return: 0
*@size: variable to determine the length of the line
*
*/

int print_diagonal(int size)
{
	int i;

	size = 0;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{

		for (i = 0; i < size; i++)
		{
			putchar(' ');
		}
		putchar('\\');
		puutchar('\n');
	}

	return (0);
}

