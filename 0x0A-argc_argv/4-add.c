#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * main - entry
 * @argc: arguments count
 * @argv: array of arguments
 * Return: 0 for success always
 */
int main(int argc, char *argv[])
{
	int i;
	unsigned int sum = 0;
	unsigned int num;
	char *s;

		if (argc > 1)
		{
			for (i = 1; i < argc; i++)
			{
				s = argv[i];

				for (num = 0; num < strlen(s); num++)
				{
					if (s[num] < 0 || s[num] > 9)
					{
						printf("Error\n");
						return (1);
					}
				}
				sum += atoi(s);
				s++;
			}
		printf("%d\n", sum);
		}
		else
		{
			printf("0\n");
		}
	return (0);
}
