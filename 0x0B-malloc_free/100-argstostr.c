#include "main.h"
#include <string.h>
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - concats all the arguments
 * @ac: args counts
 * @av: inputs
 * Return: character string
 */
char *argstostr(int ac, char **av)
{
	char *cr;
	int t = 0, a = 0, b = 0, c = 0;

	if (ac == 0 || av == NULL)
	{
		return (NULL);
	}
	do {
		while (av[a][b])
		{
			t++;
			b++;
		}
		b = 0;
		a++;
	} while (a < ac);

	cr = malloc((sizeof(char) * t) + ac + 1);

	while (av[a])
	{
		while (av[a][b])
		{
			cr[c] = av[a][b];
			b++;
			c++;
		}
		cr[c] = '\n';
		b = 0;
		a++;
		c++;
	}
	c++;
	cr[c] = '\0';
	return (cr);
}
