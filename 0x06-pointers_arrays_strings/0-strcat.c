#include <string.h>
#include <stdio.h>

/**
 * _strcat - concatenates twos strings
 * Return: dest
 * @dest: string reference
 * @src: string reference
 *
 */

char *_strcat(char *dest, char *src)
{

	strcat(dest, src);

	return (dest);
}
