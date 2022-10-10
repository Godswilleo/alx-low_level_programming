#include <stdlib.h>
#include <limits.h>
#include <string.h>

/**
* string_nconcat - concatenates two strings
* @s1: string variable
* @s2: string variable to concantenate to s1
* @n: determine the amount of bytes to add to s1 from s2
* Return: the pointer
*/

char *string_nconcat(char *s1, char *s2, unsigned int n)
{

	void *p;


	if (n >= sizeof(s2))
	{
		p = malloc(sizeof(s1) + sizeof(s2));
		p[] = strcat(s1, s2);

	}
	else
	{
		p = malloc(sizeof(s1) + n + 1);
		p[] = strncat(s1, s2, n);
	}

	if (p == NULL)
	{
		return (NULL);
	}

	return (p);

}
