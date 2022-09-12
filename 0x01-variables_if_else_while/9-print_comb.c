#include <stdio.h>

/**
* main - prints single digit numbers
* Return: 0
*/

int main(void)
{

	int x;

	for (x = 0; x < 10; x++)
	{
		if (x == 9)
		{
			putchar(x + '0');
			putchar('$');
		}
		else
		{
			putchar(x + '0');
			putchar(',');
			putchar(' ');
		}
	}

	putchar('\n');

	return (0);


}
