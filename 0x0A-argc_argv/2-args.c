#include <stdlib.h>
#include <stdio.h>

/**
* main - prints the arguments it recieves
* Return: 0
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc, char *argv[])
{

	int i;

	for (i = 0; i < argc; i++)
	{

		printf("%s\n", argv[i]);

	}
	return (0);

}
