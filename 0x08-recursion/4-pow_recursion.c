#include "main.h"
#include <stdio.h>

/**
* _pow_recursion - prints the value of x raise to power of y
* @y: the base
* @x: the power
* Return: the result
*/

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);

	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{	return (x * _pow_recursion(x, y - 1));

	}


}
