#include "main.h"

/**
* print_number - print interger
* @number: number I want to print
* Return:void
*/

void print_number(int number)
{

	unsigned int i;

	i = number;
	if (number  < 0)
	{
		_putchar(45);
		i = -number;
	}
	if (i / 10)
		print_number(i / 10);

	_putchar((i % 10) + '0');

}
