#include "main.h"

/**
 * append_text_to_file - adds text to file
 * @filename: dest file.
 * @text_content: content of file
 * Return: updated file.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fil;
	int characters;
	int permission;

	if (filename == NULL)
		return (-1);
	fil = open(filename, O_WRONLY | O_APPEND);

	if (fil == -1)
		return (-1);

	if (text_content)
	{
		for (characters = 0; text_content[characters]; characters++)
			;
		permission = write(fil, text_content, characters);

		if (permission == -1)
			return (-1);
	}
	close(fil);
	return (1);
}
