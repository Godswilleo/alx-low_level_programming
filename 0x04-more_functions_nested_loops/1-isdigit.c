#include <stdio.h>
#include <ctype.h>

/**
* _isdigit - prints 1 if character is a digit and prints 0 if otherwise
* Return: 1 if input char is uppercase and 0 if it is not
* @character: variable to be passed in
*/

int _isdigit(char character)
{
	if (isdigit(character))
		return (1);
	else
		return (0);

}
