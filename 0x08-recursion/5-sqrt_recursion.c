#include "main.h"
#include <math.h>

int _sqrt(int n, int i);
/**
 * _sqrt_recursion - entry point
 * @n: input int
 * Return: 0 for success
 */
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - entry function
 * @n: root
 * @i: input in
 * Return: rooted number
 */
int _sqrt(int n, int i)
{
	int sqrt = i * i;

	if (sqrt > n)
		return (-1);
	if (sqrt == n)
		return (i);
	return (_sqrt(n, i + 1));
}
