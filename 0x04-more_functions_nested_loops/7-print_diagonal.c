#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_diagonal - prints a diagonal line
* Return: 0
*@n: variable to determine the length of the line
*
*/

void print_diagonal(int n)
{

	if (n <= 0)
	{
		putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= n)
		{

			int i = 0;

			while (i < j)
			{
				if (i == 0)
				{

				}
				else
				{
					putchar(' ');
				}
				i++;
			}
			putchar('\\');
			putchar('\n');
		j++;

		}
	}
}

