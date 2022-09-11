#include <stdio.h>

/**
* main - prints single digit numbers
* Return: 0
*/

int main(void)
{
	char a_;
	int x;

	for (x = 0; x < 10; x++)
	{
		putchar(x + '0');
	}
	for (a_ = 'a'; a_ <= 'f'; a_++)
	{
		putchar(a_);
	}

	putchar('\n');

	return (0);

}
