#include <stdio.h>
#include <stdlib.h>

/**
* jack_bauer - prints every minute of the day from 00:00 to 23:59
* Return: 0
*
*/

int jack_bauer(void)
{

	int a, b, c, d;

	for (a = 0; a <= 2; a++)
	{
		for (b = 0; b <= 3; b++)
		{

			for (c = 0; c <= 5; c++)
			{
				for (d = 0; d <= 9; d++)
				{

				printf("%d%d:%d%d\n", a, b, c, d);

				}

			}
		}



	}

	return (0);
}
