#include <stdio.h>

/**
* print_alphabet - prints all the alphabets
* Return: 0
*
*/

int print_alphabet(void)
{
	int j = 'a';

	while (j <= 'z')
	{
		putchar(j);
		j++;
	}
	putchar('\n');

	return (0);



}
