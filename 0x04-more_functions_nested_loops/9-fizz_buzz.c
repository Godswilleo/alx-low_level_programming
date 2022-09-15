#include <stdio.h>

/**
* main - prints the fizzbuzz test
*
*/

int main(void)
{
	int i;

	for (i = 1; i <= 100; i++)
	{


		if ((i % 3) == 0)
			printf("Fizz ");

		else if ((i % 5) == 0)
			printf("Buzz ");

		else if ((i % 3) == 0 && (i % 5) == 0)
			printf("Fizz Buzz ");
		else
			if (i != 100)
				printf("%d ", i);
			else
				printf("%d", 1);

	}

	return (0);
}
