#include <stdio.h>
#include "main.h"

/**
 * error - entry
 * @file_src: sorce file
 * @file_dest: destination file
 * @argv: arguments
 * Return: nothing
 */

void error(int file_src, int file_dest, char *argv[])
{
	if (file_src == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	if (file_dest == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
}

/**
 * main - entry
 * @argc: all arguments
 * @argv: array of arguments
 * Return: 0 for success
 */

int main(int argc, char *argv[])
{
	int file_src, file_dest, err_c;
	char buffs[1024];
	ssize_t characters, permission;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_src file_dest");
		exit(97);
	}

	file_src = open(argv[1], O_RDONLY);
	file_dest = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
	error(file_src, file_dest, argv);

	characters = 1024;

	while (characters == 1024)
	{
		characters = read(file_src, buffs, 1024);

		if (characters == -1)
			error(-1, 0, argv);
		permission = write(file_dest, buffs, characters);

		if (permission == -1)
			error(0, -1, argv);
	}

	err_c = close(file_src);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_src);
		exit(100);
	}

	err_c = close(file_dest);
	if (err_c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_dest);
		exit(100);
	}
	return (0);
}

