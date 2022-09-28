#include "main.h"
#include <stdio.h>

/**
 * is_prime - checks if the number entered is prime number
 * @n: number entered
 * @c: number used for iteration
 * Return: depending on the condition
 */

int is_prime(unsigned int n, unsigned int c)
{
	if (n % c == 0)

	{
		if (n == c)
		{
			return (1);
		}
		else
		{
			return (0);

		}
	}

		return (0 + is_prime(n, c + 1));
}
/**
 * is_prime_number - checks if number entered is prime number
 * @n: number entered
 * Return: depends on conditiono of the program
 */

int is_prime_number(int n)
{
	if (n <= 0 || n == 1)
		return (0);

	return (is_prime(n, 2));
}
