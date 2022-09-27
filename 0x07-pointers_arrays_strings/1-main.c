#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Return: zero
  */

int main(void)
{

	char buffer[98] = "This is the way";
	char buffer2[98] = "To the gate";

	_memcpy(buffer + 13, buffer2, 10);

	printf("%s", buffer);
	printf("\n");
	return (0);
}
