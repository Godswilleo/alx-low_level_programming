#include <stdio.h>
#include <ctype.h>

/**
* _isupper - prints the upper case inputer char
*Return: 1 if input char is uppercase and 0 if it is not
*
*/

int _isupper(char character)
{
	if(isupper(character))
		return (1);
	else
		return(0);

}
