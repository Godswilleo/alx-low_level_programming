#include <string.h>
#include <stdio.h>
/**
* print_chessboard - prints a chessboard
* Return: nothing
* @a: char array
*
*/

void print_chessboard(char (*a)[8])
{
	int c;
	int b;

	for (c = 0; c < 8; c++)
	{
		for (b = 0; b < 8; b++)
		{
			putchar(a[c][b]);
			if (b == 7)
			{
			putchar('\n');

			}

		}

	}

}
