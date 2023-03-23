#include <stdio.h>
#include "main.h"

/**
 * main - entry point
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	i = 98;

	if (i >= 0)
	{
		printf("%d is positive\n", i);
	}
	else
	{
		printf("%d is negative\n", i);
	}
	return (0);

}
