#include <stdio.h>

/**
* main - prints all the alphabets from a-z and repeats them on ten lines
* Return: 0
*
*/

int main(void)
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
