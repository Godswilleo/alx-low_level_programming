#include <string.h>
#include <stdio.h>

/**
 * _strncpy - copies a string
 * Return: dest
 * @dest: string reference
 * @src: string reference
 * @n: acts as a limiter for the concantenation
 */

char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}
