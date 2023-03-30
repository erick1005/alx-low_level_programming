#include "main.h"
#include <string.h>
#include <stdio.h>

/**
 * leet - character encording
 * @str: input string
 * Return: a string of encorded characters
 */
char *leet(char *str)
{
	int size = strlen(str);

	int i = 0;

	while (str[i])

	for (; i < size; i++)
	{
		if (str[i] == 'a' || str[i] == 'A')
		{
			printf("4");
		}
		else if (str[i] == 'e' || str[i] == 'E')
		{
			printf("3");
		}
		else if (str[i] == 'o' || str[i] == 'O')
		{
			printf("0");
		}
		else if (str[i] == 't' || str[i] == 'T')
		{
			printf("7");
		}
		else if (str[i] == 'l' || str[i] == 'L')
		{
			printf("1");
		}
		else
		{
			printf("%c", str[i]);
		}
	}
	return (str);
}
