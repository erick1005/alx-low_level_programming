#include <stdio.h>

/**
 * main - displays characters in the alphabet
 *
 * Return: returns zero
 */
int main(void)
{
	char str
		;
	char str1;

	for (str = 'a'; str <= 'z'; str++)
		putchar(str);
	for (str1 = 'A'; str1 <= 'Z'; str1++)
		putchar(str1);
	putchar('\n');
	return (0);
}
