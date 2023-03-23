#include <stdio.h>

/**
 * main - entry of the programme
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;
	char a[] = "Fizz";
	char b[] = "Buzz";
	char c[] = "FizzBuzz";

	for (i = 1; i <= 100; i++)
	{
		if ((i % 3 == 0) && (i % 5 == 0))
		{
			printf("%s", c);
			printf(" ");
		}
		else if (i % 5 == 0)
		{
			printf("%s", b);
			printf(" ");
		}
		else if (i % 3 == 0)
		{
			printf("%s", a);
			printf(" ");
		}
		else
		{
			printf("%d", i);
			printf(" ");
			if (i != 100)
			{
				printf(" ");
			}
		}
	}
	printf("\n");
	return (0);
}
