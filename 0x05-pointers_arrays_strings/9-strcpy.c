#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * *_strcpy - copies a string
 * @dest: destination
 * @src: origin of the string
 * Return: character for success
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	while (src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	dest[i++] = '\0';

	return (dest);
}
