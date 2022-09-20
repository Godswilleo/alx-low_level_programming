#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/**
 * puts2 - prints everyother character of a string
 * Return: returns to string length
 * @str: string varaible to be checked
 *
 */

void puts2(char *str)
{
	int a;

	a = 0;

	while (str[a])
	{

	putchar(str[a]);

	a = a + 2;

	}
	putchar('\n');




}
