#include <stdio.h>
#include <stdlib.h>

/**
 * main - entry
 * @argc: total arguments
 * @argv: pointer array
 * Return: 0 for success
 */
int main(int argc, char *argv[])
{
	int byte, i;

	int (*address)(int, char **) = main;
	unsigned char opcode;

	if (argc != 2)
	{
		printf("Error\n");
		exit(1);
	}

	byte = atoi(argv[1]);

	if (byte < 0)
	{
		printf("Error\n");
		exit(2);
	}

	for (i = 0; i < byte; i++)
	{
		opcode = *(unsigned char *)address;
		printf("%.2x", opcode);

		if (i == byte - 1)
		{
			continue;
		}
		printf(" ");

		adress++;
	}
	printf("\n");
	return (0);
}
