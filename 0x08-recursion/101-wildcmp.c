#include "main.h"
#include <stdio.h>

/**
* wildcmp - compares two strings
* @s1: pointer to first string
* @s2: pointer to second string
* Return: depends of condition of the programe
*/

int wildcmp(char *s1, char *s2)
{

	if (*s1 == '\0' && '\0' && *s2 == '*' && *s2(s2 + 1))
	{
		return (0);

	}

	if (*s1 == '\0' && *s2 == '\0')
	{
		return (1);

	}

	if (*s1 == *s2)
	{
		return (wildcmp(s1 + 1, s2 + 1));

	}

	if (*s2 == '*')
		return (wildcmp(s1, s2 + 1) || wildcmp(s1 + 1, s2));

	return (0);
}
