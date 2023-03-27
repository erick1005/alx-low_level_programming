#include "main.h"

/**
 * _atoi - string to integer conversion
 * @s: input string
 * Return: intager
 */
int _atoi(char *s)
{
	int m = 0;

	int sign = 1;

	int i;

	if (s[i] == '-')
		sign = -i;
			i++;

	for (i = 0; s[i] != '\0'; i++)
	{
		m = m * 10 + s[i] - '0';
	}
	return (sign * m);
}
