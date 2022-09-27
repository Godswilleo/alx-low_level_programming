#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 * Return: 0
 *
 */

int main(void)
{

	char str[] = "Expect the bes. Prepare for the worst. Capitalize on what comes. \nhello world! hellow-world 0123456hello world\thello world\n";

	char *ptr;

	ptr = cap_string(str);
	printf("%s", ptr);
	printf("%s", str);

	return (0);

}
