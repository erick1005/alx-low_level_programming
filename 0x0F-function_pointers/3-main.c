#include "3-calc.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: size
 * @argv: array
 * Return: 0 success
 */
int main(int argc, char *argv[])
{
	int (*optrn)(int, int);

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}
	optrn = get_op_func(argv[2]);

	if (!optrn)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", optrn(atoi(argv[1]), atoi(argv[3])));
	return (0);

}
