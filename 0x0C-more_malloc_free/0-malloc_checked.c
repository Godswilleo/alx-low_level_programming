#include <stdlib.h>
#include <limits.h>
/**
* malloc_checked - writes a function that allocates memory using malloc
* @b: is the number of bytes to allocate
* Return: nothing
*/

void *malloc_checked(unsigned int b)
{
	
	void *p;
	p = malloc(b);


	if (p == NULL)
	{
		exit(98);
	}

	return (p);

}
