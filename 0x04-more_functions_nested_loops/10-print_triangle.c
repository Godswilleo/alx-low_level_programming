#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
* print_triangle - prints a diagonal line
* Return: 0
* @size: variable to determine the size of the triangle
*
*/

void print_triangle(int size)
{

	int i,k;

	if (size <= 0)
	{
		putchar('\n');
	}
	else
	{
		int j = 1;

		while (j <= size)
		{
			i = 0;

			while (i < (size - j))
			
			{
				putchar(' ');
				i++;	
			}
			k = 0;

			while (k < j)
			{
				putchar('#');
				k++;
			}

			putchar('\n');
		j++;

		}
	}
}

