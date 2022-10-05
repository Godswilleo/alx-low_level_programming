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
	

	if (argc < 3)
	{
		printf("%d", 0);
	}
	else 
	{

		sum = 0;

		for (i = 1; i < argc; i++)
		{
			
			for (j = 0; argv[i][j] != '\0'; j++)
			{

				if (argv[i][j] < '0' || argv[i][j] > '9')
				{
					printf("Error\n");
					return (1);
				
				}

			}

			sum = sum + atoi(argv[i]);

		}
		printf("%d\n", sum);
		return (0);		
	}

	
}
