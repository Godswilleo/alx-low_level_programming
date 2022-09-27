#include <string.h>
#include <stdio.h>

/**
 * reverse_array - reverses the array of integers
 * Return: nothing
 * @a: the array variable
 * @n: number of elements in the array
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;	

	for (i = (n -1); i >= (n / 2); i--)
	{
		j = a[n - 1 - j];
		
		a[n - 1 - i] = a[i];
		
		a[i] = j;
	}


}
