#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * print_rev - prints strings in reverse
 * @s: variable containing string to be reversed
 *
 */

void print_rev(char *s)
{
	int a;

	for (a = strlen(s); a >= 0; a--)
	{

	putchar(s[a]);

	}

	putchar('\n');

}
