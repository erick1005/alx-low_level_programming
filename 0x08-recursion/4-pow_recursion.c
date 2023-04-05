#include "main.h"
#include <math.h>

/**
 * _pow_recursion - main entry point
 * @x: base value
 * @y: raised value
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	return (pow(x, y));
}
