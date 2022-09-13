#include <stdio.h>
#include <stdlib.h>

/**
* print_last_digit - prints the last digit of a number
* Return: 0
* @num: variable to check
*/

int print_last_digit(int num)
{

	int r;

	if(num < 10 && num > -9)
	{
	return (0);
	}
	else
	{

	r = num % 10;
	return (r);
	}
}
