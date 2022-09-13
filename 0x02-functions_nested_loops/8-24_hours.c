#include <stdio.h>
#include <stdlib.h>

/**
* jack_bauer - prints every minute of the day from 00:00 to 23:59
* Return: 0
*
*/

int jack_bauer(void)
{

	int a, b;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{

			printf("%d:%d\n", a, b);

		}



	}

	return (0);
}
