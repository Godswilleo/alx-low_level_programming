#include <stdio.h>

/**
 * swap_int - swaps the values of two int variables
 * @a: first variable
 * @b: second variable
 *
 */

void swap_int(int *a, int *b)
{
	int i;

	i = 0;
	i = *a;
	*a = *b;
	*b = i;

}
