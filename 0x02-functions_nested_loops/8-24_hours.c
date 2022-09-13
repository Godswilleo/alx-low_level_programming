#include <stdio.h>
#include <stdlib.h>

/**
* jack_bauer - prints every minute of the day from 00:00 to 23:59
* Return: 0
*
*/

int jack_bauer(void)
{

	int a, b, x, y;

	for (a = 0; a <= 23; a++)
	{
		for (b = 0; b <= 59; b++)
		{
			if (a > 9)
			{
				x = "%d", a;
			}
			else
			{
				x = "0%d", a;
			}
			if (b > 9)
			{
				y = "%d", b;
			}
			else
			{
				y = "0%d", b;
			}

			putchar(x);
			putchar(":");
			putchar(y);

		}



	}

	return (0);
}
