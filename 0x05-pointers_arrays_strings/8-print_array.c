#include <stdio.h>
#include <stdlib.h>

/**
* print_array - prints an array
* @a: The array reference
* @n: The number of array elements
*
*/

void print_array(int *a, int n)
{
	int i;


	i = 0;

	for (i = 0; i <	n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i]);
		else
			printf("%d", a[i]);


	}
	printf("\n");






}
