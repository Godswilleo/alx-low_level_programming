#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>

/**
* create_array - creates an array and returns a pointer
* Return: NULL if size is 0
* @c: character passed
* @size: size of array
*/

char *create_array(unsigned int size, char c)
{
	char *a;
	unsigned int b;

	if (size == 0)
		return (NULL);

	a = malloc(sizeof(c) * size);

	if (a == NULL)
		return (NULL);

	for (b = 0; b < size; b++)
		a[i] = c;

	return (a);
}
