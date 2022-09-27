#include <string.h>
#include <stdio.h>
/**
 * _strspn - gets the length of a prefix substring
 * Return: pos
 * @s: string variable
 * @accept: prefix substring
 */

unsigned int _strspn(char *s, char *accept)
{
	unsigned int pos = strspn(s, accept);

	return (pos);
}
