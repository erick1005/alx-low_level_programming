#include "main.h"

/**
 * create_file - creates a new file
 * @filename: name of the file
 * @text_content: contents of the created file
 * Return: new file
 */
int create_file(const char *filename, char *text_content)
{
	int fil;
	int characters;
	int permission;

	if (filename == NULL)
		return (-1);
	fil = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fil == -1)
		return (-1);

	if (text_content == NULL)
		text_content = "";

	for (characters = 0; text_content[characters]; characters++)
		;
	permission = write(fil, text_content, characters);

	if (permission == -1)
		return (-1);
	close(fil);

	return (1);
}
