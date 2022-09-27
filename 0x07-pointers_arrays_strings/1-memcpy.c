#include <string.h>
#include <stdio.h>
/**
 * _memcpy - fills memory with a constant byte
 * Return: dest
 * @dest: destination variable
 * @n: number of bytes to copy
 * @src: source variable
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	memcpy(dest, src, n);

	return (dest);

}
