#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Return: zero
  */

int main(void)
{

	char buffer[98];

	_memset(buffer, 'a', 98);

	printf("%s", buffer);
	printf(" ");
	return (0);
}
