#include <string.h>
#include <stdio.h>
#include "main.h"

/**
  * main - entry point
  * Return: 0
  */

int main(void)
{
	char *s = "hello, world";
	char *f = "world";
	char *t;

	t = _strstr(s, f);

	printf("%s\n", t);

	return (0);
}
