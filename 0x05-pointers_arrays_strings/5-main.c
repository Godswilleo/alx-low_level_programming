#include "main.h"
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{

	char s[10] = "My School";
	char rev;

	rev = rev_string(s);

	printf("%d\c", rev);
	return (0);
}
