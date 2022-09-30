#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the result of multiplication of two numbers
* Return: 1 if program doesn't recieve 2 arguments and 0
* Description: the program assumes the arguments passed in are always integers
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc, char *argv[])
{
	if (argc != 3)
	{
		printf("Error\n");
		return (0);
	}
	else
	{
		int result;

		result = atoi(argv[1]) * atoi(argv[2]);

		printf("%d\n", result);

		return (0);
	}
}
