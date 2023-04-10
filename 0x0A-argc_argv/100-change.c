#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry of the programme
 * @argc: arguments counts
 * @argv: argument array
 * Return: always 0 for success
 */
int main(int argc, char *argv[])
{
	int totalsum, i;

	argv[] = {25, 10, 5, 2, 1};

	int min_coins = sizeof(int)(argv) / sizeof(int);
	int count = 0;

	if (argc != 1)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		for (i = 0; i < min_coins; i++)
		{
			count += amount / atoi(argv[i]);
			amount %= atoi(argv[i]);
		}
	}
	printf("%d\n", count);
}
