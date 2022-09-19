#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * _puts - prints a string
 * Return: returns to string length
 * @s: string varaible to be checked
 *
 */

void _puts(char *str)
{
	int a;

	a = 0;

	while (str[a])
	{

	putchar(str[a]);

	a++;

	}
	putchar('\n');




}
