#include "main.h"

/**
 * create_file - function that creates a file.
 * @filename: pointer to the name of the file to create.
 * @text_content: pointer to a string to write to the file.
 * Return: 1 on success
 * otherwise - 1
 */
int create_file(const char *filename, char *text_content)
{
	int g, w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	g = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(g, text_content, length);
	if (g == -1 || w == -1)
		return (-1);
	close(g);
	return (1);
}
