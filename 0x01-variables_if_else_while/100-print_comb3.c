#include <stdio.h>

/**
* main - prints all possible different combinations of two digits
* Return: 0
*
*/

int main(void)
{
	int a;
	int b;

	for (a = 0; a <= 9; a++)
	{

		for (b = 0; b <= 9; b++)
		{
			if (a >= b)
			{
			continue;
			}

			putchar(a + '0');
			putchar(b + '0');
			if (!(a == 8 && b == 9))
			{
				putchar(',');
				putchar(' ');
			}

		}
	}

	putchar('\n');
	return (0);

}
