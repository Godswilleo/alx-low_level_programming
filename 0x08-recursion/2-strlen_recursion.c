#include "main.h"
#include <stdio.h>

/**
 * _strlen_recursion - prints the length of a string
 * @s: pointer to the string to be printed
 * Return: Nothing
 */

int _strlen_recursion(char *s)
{
	if (!*s)
	{

		return (0);

	}

	return (1 + _strlen_recursion(s + 1));
}
