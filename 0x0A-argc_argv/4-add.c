#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* main - prints the result addition of positive numbers
* Return: 0 if the program run sucessfully if one of the num not int
* Description: the program assumes the arguments passed in are always integers
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc, char *argv[])
{

	int i, j;
	int sum;
	char *p;

	if (argc < 2)
	{
		printf("0\n");
		return (1);
	}
	else
	{
		sum = 0;

		i = 1;

		while (i < argc)
		{
			p = argv[i];

			for (j = 0; j < strlen(p); j++)
			{
				if (isdigit(*(p + j)) == 0)
				{
					printf("Error\n");
					return (1);
				}

			}

			sum = sum + atoi(argv[i]);
			i++;
		}

	}
	printf("%d\n", sum);
	return (0);
}
