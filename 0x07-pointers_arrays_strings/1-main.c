#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Return: zero
  */

int main(void)
{

	char buffer[98] = {0};
	char buffer2[98] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14};

	_memcpy(buffer + 50, buffer2, 98);

	printf("%s", buffer);
	printf("\n");
	return (0);
}
