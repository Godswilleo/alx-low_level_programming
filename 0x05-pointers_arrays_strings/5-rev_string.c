#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * rev_string - prints strings in reverse
 * @s: variable containing string to be reversed
 *
 */

void rev_string(char *s)
{
	int a;

	for (a = (strlen(s)-1); a >= 0; --a)
	{

	putchar(s[a]);

	}

	putchar('\n');

}
