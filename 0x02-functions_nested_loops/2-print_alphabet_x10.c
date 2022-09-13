#include <stdio.h>

/**
* print_alphabet_x10 - prints 10lines of a-z
* Return: 0
*
*/

int print_alphabet_x10(void)
{
	int i = 0;

	while (i < 10)
	{
		int j = 'a';

		while (j <= 'z')
		{
			putchar(j);
			j++;
		}
		putchar('\n');
		i++;
	}
	return (0);



}
