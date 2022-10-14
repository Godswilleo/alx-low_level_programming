#include <stdio.h>
#include <stdarg.h>

/**
* print_strings -  print the strings passed
* @n: number of arguments
* @seperator: character separating the printed numbers
* Return: 0 if n is zero and returns sum if it is not
*/

void print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;

	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		char j  = va_arg(args, char *);
			
		if (j == '\0')
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", j);

		if (seperator != NULL && i != n)
		{
			printf("%s", seperator);
		}
		if ( i == n)
		{
			printf("\n");
		}

	}

	va_end(args);
	return (0);


}
