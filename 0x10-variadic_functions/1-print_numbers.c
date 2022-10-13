#include <stdio.h>
#include <stdarg.h>

/**
* sum_them_all -  sums up all int argument entered
* @n: number of arguments
* Return: 0 if n is zero and returns sum if it is not
*/

int print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		int x = va_arg(args, int);
		printf("%d", x);
		
		if (i == n)
			printf("\n");
		else
			printf("%s", seperator);
	}

	va_end(args);
	return (0);


}
