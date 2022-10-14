#include <stdio.h>
#include <stdarg.h>

/**
* print_numbers -  print the numbers passed
* @n: number of arguments
* @seperator: character separating the printed numbers
* Return: 0 if n is zero and returns sum if it is not
*/

void print_numbers(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;

	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		int x = va_arg(args, int);

		printf("%d", x);
		if (seperator != NULL && i != n)
		{
			printf("%s", seperator);
		}


	}
	printf("\n");

	va_end(args);

}
