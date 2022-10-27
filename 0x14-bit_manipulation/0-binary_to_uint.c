#include <stdio.h>
#include <string.h>
#include "main.h"

/**
* binary_to_uint - converts binary to unsigned int
* @b: number to be converted
* Return: 0 if b is NULL or b contains char other than
* 0 or 1 else return 1
*/

unsigned int binary_to_uint(const char *b)
{
	int slen = strlen(b);
	int number = 0;
	int decimal = 1;
	int i;

	if (!b)
		return (0);

	for (i = (slen - 1); i >= 0; i--)
	{

		if (b[i] != '0' && b[i] != '1')
		{
			return (0);
		}

		if (b[i] == '1')
			number += decimal;

		decimal *= 2;

	}
	return (number);

}
