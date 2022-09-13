#include <stdio.h>
#include <stdlib.h>

/**
* add - adds two intergers together
* Return: the sum
* @num1: variable to be added
* @num2: variable to be added
*/

int add(int num1, int num2)
{
	int total_num;

	if ((sizeof(num1) == sizeof(int)) && (sizeof(num2) == sizeof(int)))
	{
	total_num = num1 + num2;
	return (total_num);
	}

}
