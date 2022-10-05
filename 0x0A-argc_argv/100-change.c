#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <ctype.h>

/**
* main - prints maximum number of coins needed to make change
* Return: 0 if the program run sucessfully if one of the num not int
* Description: the program assumes the arguments passed in are always integers
* @argc: count of terminal arguments
* @argv: pointer to characters of terminal arguments
*/

int main(int argc, char *argv[])
{
	int cent = atoi(argv[1]);
	int i;
	int coins = 0;

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	if (cent < 0)
	{
		printf("%d\n", 0);
		return (1);
	}
	else
		while(cent != 0)
		{
			coins = coins + 1;
			if ((cent - 25) >= 0)
			{
				cent = cent - 25;
				continue;
			}
			if ((cent - 10) >= 0)
			{
				cent = cent -10;
				continue;
			}
			if ((cent - 5) >= 0)
			{
				cent = cent - 5;
				continue;
			}
			if ((cent - 2) >= 0);
			{
				cent = cent - 2;
				continue;
			}
			if ((cent - 1) >= 0);
			{
				cent = cent - 1;
			}
		}
		printf("%d\n", coins);
		return (0);
}
