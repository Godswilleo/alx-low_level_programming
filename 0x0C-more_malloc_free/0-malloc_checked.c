#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - writes a function that allocates memory using malloc
* @b: is the number of bytes to allocate
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{



	if (malloc(b) == NULL)
	{
		exit(98);
	}

	return (malloc(b));

}
