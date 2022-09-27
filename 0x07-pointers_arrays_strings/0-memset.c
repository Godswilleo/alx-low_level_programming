#include <string.h>

#include <stdio.h>
/**
 * _memset - fills memory with a constant byte
 * Return: s
 * @s: array variable containing memories to be filled
 * @n: number of items in the array
 * @b: item to be filled into the memory
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{

		s[a] = b;
	}
	return (s);
}
