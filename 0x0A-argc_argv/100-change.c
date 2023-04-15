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
	int min_coins;
	int totalsum = 0;

	min_coins = atoi(argv[1]);

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	while (min_coins > 0)
	{
		totalsum++;
		if ((min_coins - 25) >= 0)
		{
			min_coins -= 25;
			continue;
		}
		if ((min_coins - 10) >= 0)
		{
			min_coins -= 10;
			continue;
		}
		if ((min_coins - 5) >= 0)
		{
			min_coins -= 5;
			continue;
		}
		if ((min_coins - 2) >= 0)
		{
			min_coins -= 2;
			continue;
		}
		min_coins--;
	}
	printf("%d\n", totalsum);
	return (0);
}
