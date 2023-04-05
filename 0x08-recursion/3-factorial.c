#include "main.h"

/**
 * factorial - entry point
 * @n: input integer
 * Return: 0 for success always
 */
int factorial(int n)
{
	int res;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 0)
		return (1);
	res = n * factorial(n - 1);
	return (res);
}
