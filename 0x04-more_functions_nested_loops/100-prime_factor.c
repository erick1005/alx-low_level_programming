#include <math.h>
#include <stdio.h>

/**
 * main - entry
 * Return: 0 for successful
 */
int main(void)
{
	long i, maximumf;
	long number = 612852475143;
	double squart = sqrt(number);

	for (i = 1; i <= squart; i++)
	{
		if (number % i == 0)
		{
			maximumf = number / i;
		}
	}
	printf("%ld\n", maximumf);
	return (0);
}
