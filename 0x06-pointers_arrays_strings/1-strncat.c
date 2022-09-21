#include <string.h>
#include <stdio.h>

/**
 * _strncat - concatenates twos strings
 * Return: 0
 * @dest: string reference
 * @src: string reference
 * @n: acts as a limiter for the concantenation
 */

char *_strncat(char *dest, char *src, int n)
{

	strncat(dest, src, n);
	return (0);
}
