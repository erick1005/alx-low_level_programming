#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: arguments count
 * @argv: arguments array
 * Return: 0 for success, 1 otherwise
 */
int main(int argc, char *argv[])
{
	int num1 = 0, num2 = 0;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	else
	{
		num1 = atoi(argv[1]);
		num2 = atoi(argv[2]);

		printf("%d\n", num1 * num2);
	}
	return (0);
}
