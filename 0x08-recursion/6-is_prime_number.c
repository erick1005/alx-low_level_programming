#include "main.h"

/**
 * is_prime_number - entry
 * @n: input
 * Return: integer
 */
int is_prime_number(int n)
{
	int j;

	if (n <= 1)
		return (0);
	for (j = 2; j * j <= n; j++)
	{
		if (n % j == 0)
			return (0);
	}
	return (1);
}
