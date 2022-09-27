#include <string.h>
#include <stdio.h>
/**
 * _strstr - locates a substring from a string
 * Return: pos
 * @haystack: string
 * @needle: substring to be located
 */

char *_strstr(char *haystack, char *needle)
{
	char *pos = strstr(haystack, needle);

	return (pos);
}
