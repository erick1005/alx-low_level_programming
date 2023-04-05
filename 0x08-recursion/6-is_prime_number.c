#include "main.h"

int _prime(int n, int i);
/**
 * is_prime_number - entry
 * @n: input
 * Return: integer
 */
int is_prime_number(int n)
{
	return (_prime(n, 1));
}

/**
 * _prime - checks if n is prime
 * @n: input
 * @i: iteration
 * Return: prime number
 */
int _prime(int n, int i)
{
	if (n <= 1)
	{
		return (0);
	}
	if (n % i == 0 && i > 1)
	{
		return (0);
	}
	if ((n / i) < i)
	{
		return (1);
	}
	return (_prime(n, i + 1));
}
