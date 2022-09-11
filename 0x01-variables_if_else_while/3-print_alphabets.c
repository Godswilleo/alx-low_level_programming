#include <stdio.h>

/**
* main - print alphabet from a - z
* Return: 0
*
*/

int main(void)
{
	int a_;
	int b_;
	int x = '\n';

	for (a_ = 'a'; a_ <= 'z'; a_++)
	{
		putchar(a_);
	}


	for (b_ = 'A'; b_ <= 'Z'; b_++)
	{
		putchar(b_);
	}
	putchar(x);

	return (0);
}

