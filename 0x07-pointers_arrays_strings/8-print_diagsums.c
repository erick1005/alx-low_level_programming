#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - entry for the function
 * @a: input array
 * @size: array size
 * Return: void
 */
void print_diagsums(int *a, int size)
{
	int i, j, diagsum1 = 0, diagsum2 = 0;

	for (i = 0; i <= (size * size); i = i + size + 1)
	{
		diagsum1 += a[i];
	}
	for (j = size - 1; j <= (size * size) - size; j = j + size - 1)
	{
		diagsum2 += a[j];
	}
	printf("%d, %d\n", diagsum1, diagsum2);
}
