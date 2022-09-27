#include <string.h>
#include <stdio.h>
/**
 * print_diagsums - prints the sum of diagonals of an int matrix
 * Return: nothing
 * @a: matrix variable
 * @size: size of the matrix
 */

void print_diagsums(int *a, int size)
{
	int i;
	int j = 0;
	int k = 0;

	for (i = 0; i < size; i++)
	{
		j = j + a[i];
		a = a + size;
	}

	a = a - size;

	for (i = 0; i < size; i++)
	{
		k = 1 + a[i];
		a = a - size;
	}

	printf("%d, %d\n", j, k);
}


