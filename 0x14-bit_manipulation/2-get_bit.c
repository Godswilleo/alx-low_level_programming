#include "main.h"

/**
*get_bit - return the value of a bit at the given index
*@n: the number
*@index: index of the required bit
*
*Return: the value of the bit if it goes well else returns -1
*/

int get_bit(unsigned long int n, unsigned int index)
{

	if (index > 63)
		return (-1);

	return ((n >> index) & 1);
}
