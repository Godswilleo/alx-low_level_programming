#include "main.h"
#include <stdio.h>

/**
 * _print_rev_recursion - prints a string in reverse order
 * @s: pointer to the string to be printed
 * Return: Nothing
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);

		putchar(*s);
	}

}
