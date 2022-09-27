#include <string.h>
#include <stdio.h>
/**
 * _strpbrk - searches a string for any of a set of a given bytes
 * Return: pos
 * @s: string variable
 * @accept: substring from the found byte
 */

char *_strpbrk(char *s, char *accept)
{
	char *pos = strpbrk(s, accept);

	return (pos);
}
