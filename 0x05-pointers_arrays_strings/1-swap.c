#include "main.h"

/**
 * swap_int - changes two integers
 * @a: first value
 * @b: second value
 * Return: void
 */
void swap_int(int *a, int *b)
{
	int *temp;

	*temp = *a;
	*a = *b;
	*b = *temp;
}
