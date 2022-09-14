#include <stdio.h>
#include "main.h"

/**
* jack_bauer - prints every minute of the day from 00:00 to 23:59
* Return: 0
*
*/

void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs <= 23; hrs++)
	{
		for (mins = 0; mins <= 59; mins++)
		{
			if (hrs > 9 && mins > 9)
			{
				_putchar(hrs);
				_putchar(':');
				_putchar(mins);
				_putchar(',');
				_putchar(' ');
			}
			if (hrs < 9 && mins > 9)
			{
				_putchar('0');
				_putchar(hrs);
				_putchar(':');
				_putchar(mins);
				_putchar(',');
				_putchar(' ');
			}
			if (hrs == 23 && mins == 59)
			{
				_putchar(hrs);
				_putchar(':');
				_putchar(mins);
				_putchar('\n');
			}

		}
	}
}

