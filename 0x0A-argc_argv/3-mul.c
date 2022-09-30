#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the result of multiplication of two numbers
* Return: 0
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc __attribute__((unused)), char *argv[])
{

	int result;

	result = atoi(argv[1]) * atoi(argv[2]);

	printf("%d\n", result);

	return (0);

}
