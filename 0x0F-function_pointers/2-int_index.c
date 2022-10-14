#include "function_pointers.h"

/**
 * int_index - searches for an integer in an array of integers
 * @array: Array of integers
 * @size: Size of the array
 * @cmp: Pointer to the function to be used for comparison
  * Return: if no element matches or size <= 0 - 1
 */


int int_index(int *array, int size, int (*cmp)(int))
{

	int i;
	int j;

	if (array == NULL || cmp == NULL)
	{
		return (-1);
	}

	for (i = 0; i < size; i++)
	{
		j = cmp(array[i]);

		if (j != 0)
		{
			return (i);
		}
	}

	return (-1);
}
