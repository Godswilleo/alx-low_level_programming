#include <string.h>
#include <stdio.h>
#include <ctype.h>

/**
 * string_toupper - converts lower case strings to upper case
 * Return: nothing
 * @s: string to change to uppercase
 */

char *string_toupper(char *s)
{
	int i;
	int length = strlen(s);

	for (i = 0; i < length; i++)
	{
		s[i] = toupper(s[i]);
	}
	return (s);

}
