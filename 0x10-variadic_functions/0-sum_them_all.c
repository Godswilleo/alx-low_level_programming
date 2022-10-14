#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all -  sums up all int argument entered
* @n: number of arguments
* Return: 0 if n is zero and returns sum if it is not
*/

int sum_them_all(const unsigned int n, ...)
{
	va_list arg_list;
	unsigned int i;
	unsigned int sum = 0;

	va_start(arg_list, n);

	for (i = 0; i < n; i++)
	{
		int x = va_arg(arg_list, int);

		sum = sum + x;

	}

	va_end(arg_list);

	return (sum);


}

