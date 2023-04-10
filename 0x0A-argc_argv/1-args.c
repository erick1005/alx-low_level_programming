#include <stdio.h>
#include <string.h>

/**
 * main - entry
 * @argc: argument counts
 * @argv: arguments array
 * Return: 0 for success
 */
int main(int argc, char __attribute__((unused)) *argv[])
{
	if (argc == 1)
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
