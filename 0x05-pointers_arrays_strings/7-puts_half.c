#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * puts2 - prints everyother character of a string
 * Return: returns to string length
 * @str: string varaible to be checked
 *
 */

void puts_half(char *str)
{
	int a;
	int b;
	int length;

	a = 0;

	while (src[i] != '\0')
	{
		if ((strlen(str[a]) % 2 == 0))
		{
			length = (strlen(str[a]))/2;
		}
		else
		{
			length = (strlen(str[a])-1)/2;
		}

		for (b = length; b >= strlen(str[a]); b++)
		{
			putchar(str[a]);
			a++;
		}
		putchar('\n');
	}


}
