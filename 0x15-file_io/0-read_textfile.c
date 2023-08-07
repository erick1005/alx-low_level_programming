#include "main.h"

/**
 * read_textfile - reading a file
 * @filename: src file
 * @letters: file element
 * Return: content of a file.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t reader, written;
	int total;
	char *characters;

	if (filename == NULL)
		return (0);
	total = open(filename, O_RDONLY);

	if (total == -1)
		return (0);
	characters = malloc(sizeof(char) * letters);

	if (characters == NULL)
		return (0);
	reader = read(total, characters, letters);

	written = write(STDOUT_FILENO, characters, reader);

	free(characters);
	close(total);
	return (written);
}
