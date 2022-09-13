#include <stdio.h>
#include <stdlib.h>

/**
* print_to_98 - prints from n to 98
* Return: 0
* @num: variable to start from
*/

int print_to_98(int num)
{

	int i;

	if (num < 98)
	{
		for (i = num; i <= 98; i++)
		{
			printf("%d, ", i);

		}
	}
	if (num == 98)
	{

		printf("98");
	}
	if (num > 98)
	{

		for (i = num; i >= 98; i--)
		{

			printf("%d, ", i);
		}
	}
	printf("\n");
	return (0);
}
