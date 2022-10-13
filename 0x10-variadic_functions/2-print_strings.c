#include <stdio.h>
#include <stdarg.h>

/**
* print_strings -  print the strings passed
* @n: number of arguments
* @seperator: character separating the printed numbers
* Return: 0 if n is zero and returns sum if it is not
*/

int print_strings(const char *seperator, const unsigned int n, ...)
{
	unsigned int i;
	va_list args;


	va_start(args, n);

	for (i = 1; i <= n; i++)
	{
		char x = va_arg(args, int);
		char j = x + '\0';		
	
		printf("%c", j);

		if (i == n)
			printf("\n");
		else
		{
			if (seperator != NULL)
				printf("%s", seperator);
		}
	}

	va_end(args);
	return (0);


}
