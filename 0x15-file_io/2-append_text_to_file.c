#include "main.h"

/**
 * append_text_to_file - Function that appends text at the end of a file.
 * @filename: pointer to the name of the file.
 * @text_content: String to add to the end of the file.
 * Return: If successful - 1
 * if the function fails or filename is NULL - -1.
 * If the file does not exist the user lacks write permissions - -1.
 *  Otherwise - 1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int f, g;
	int length = 0;

	if (filename == NULL)
	return (-1);

	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
		length++;
	}
	f = open(filename, O_WRONLY | O_APPEND);
	g = write(f, text_content, length);

	if (f == -1 || g == -1)
		return (-1);

	close(f);
	return (1);
}
