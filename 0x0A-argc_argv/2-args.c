#include <stdio.h>

/**
 * main - entry
 * @argc: arguments counts
 * @argv: arguments array
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
