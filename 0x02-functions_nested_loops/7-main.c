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

	x = print_last_digit(0);
	printf("%d\n", x);

	x = print_last_digit(185);
	printf("%d\n", x);


	x = print_last_digit(-384746);
	printf("%d\n", x);


	x = print_last_digit(55);
	printf("%d\n", x);
	return (0);

}
