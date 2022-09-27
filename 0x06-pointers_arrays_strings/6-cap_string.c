#include "main.h"

/**
 * cap_string - capitalizes strings 
 * Return:
 * @s: the string for capitalization 
 *
 */

char *cap_string(char *a)
{
 	int i;
	length = strlen(a[i]);

	for (i = 0; i <= length; i++)
	{	
		if (a[i] = ' ')
		{
			++i;
			if (a[i] >= 'a' && a[i] <= 'z')
				a[i] = a[i] - 32;
				continue;
		}
	
		return (a[i]);
	}
	

}

