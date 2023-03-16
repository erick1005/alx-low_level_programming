/**
 * main - doesnt take in any parameters
 *
 * Return: returns no value
 */

#include <stdio.h>

int main(void)
{
	char c;
	int i;
	long int x;
	long long int y;
	float z;

	printf("Size of a char: %lu. byte(s)\n", sizeof(c));
	printf("Size of an int: %lu. byte(s)\n", sizeof(i));
	printf("Size of a long int: %lu. byte(s)\n", sizeof(x));
	printf("Size of a long long int: %lu. byte(s)\n", sizeof(y));
	printf("Size of a float: %lu. byte(s)\n", sizeof(z));
	return (0);

}
