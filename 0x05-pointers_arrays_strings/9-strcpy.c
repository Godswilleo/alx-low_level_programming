#include <stdio.h>

/**
 * _strcpy - copy the string from src to dest
 * @dest: the destination string
 * @src: the source string
 * Return: dest
 *
 */

char *_strcpy(char *dest, char *src)
{

	int i = -1;

	do
	{
		i++;
		dest[i] = src[i];
	
	}
	while (src[i] != '\0');

	return (dest);

}
