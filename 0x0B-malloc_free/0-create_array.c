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

	a = (char *) malloc(sizeof(c) * size);

	if (a == 0)
		return (NULL);

	b = 0;
		for (b = 0; b < size; b++)
		{
			*(a + b) = c;

		}

	return (a);

}
