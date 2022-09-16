#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal line
* Return: 0
*@size: variable to determine the length of the line
*
*/

void print_diagonal(int size)
{

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= size)
		{

			int i = 0;

			while (i <= j)
			{
				putchar(' ');
				i++;
			}
			putchar('\\');
			putchar('\n');
		j++;

		}
	}
}

