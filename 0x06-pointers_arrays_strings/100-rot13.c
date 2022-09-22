#include <string.h>
#include <stdio.h>

/**
 * rot13 - applies rot13 encryption
 * Return: nothing
 * @s: array of alphabets
 */

char *rot13(char *s)
{
	int i;

	char alphabets[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char rot13x[] = "nopqrstuvwxyzabcdefghijklmNOPQRSTUVWXYZABCDEFGHIJKLM";

	for (i = 0; i < 52; i++)
	{
		if (s[i] <= 122 && s[i] >= 65)
		{
			rot13x[i] = alphabets[i];
			s[i] = rot13x[i];
		}
		printf("%c", s[i] + '\0');
	}
	return (s);

}
