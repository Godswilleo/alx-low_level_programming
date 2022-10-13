#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all -  sums up all int argument entered
* @n: number of arguments
* Return: 0 if n is zero and returns sum if it is not
*/

int sum_them_all(const unsigned int n, ...)
{
	unsigned int i, sum = 0;


	if (n == 0)
		return (0);

	else
	{
		va_list args;

		va_start(args, n);

		for (i = 0; i < n; i++)
		{
			int x = va_arg(args, int);

			sum = sum + x;
		}

		va_end(args);
		return (sum);

	}
}
