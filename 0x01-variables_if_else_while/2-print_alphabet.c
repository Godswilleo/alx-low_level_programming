#include <stdio.h>

/**
* main - print alphabet from a - z
* Return: 0
*
*/

int main(void)
{
	int a_;

	int x = '\n';

	for (a_ = 'a'; a_ <= 'z'; a_++)
	{
		putchar(a_);
	}

	putchar(x);

	return (0);
}

