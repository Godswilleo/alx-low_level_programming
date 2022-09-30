#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the number of arguments passed
* Return: 0
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);

	return (0);

}
