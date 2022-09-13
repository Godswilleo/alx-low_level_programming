#include "main.h"
#include <stdio.h>
#include <stdlib.h>


/**
* main - entry point
* Return: 0
*
*/

int main(void)
{

	int x;

	x = print_last_digit(98);
	printf("%d", x);

	x = print_last_digit(0);
	printf("%d", x);


	x = print_last_digit(-1024);
	printf("%d", x);


	x = print_last_digit(24);
	printf("%d", x);
	return (0);

}
