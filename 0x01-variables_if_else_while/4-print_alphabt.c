#include <stdio.h>

/**
 * main - initializes the rograme
 *
 * Return: returns zero to the main function
 */
int main(void)
{
	char It;

	for (It = 'a'; It <= 'z'; It++)
		if (It != 'q' && It != 'e')
			putchar(It);
	putchar('\n');
	return (0);
}
