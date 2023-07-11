#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Function that reads text file print to STDOUT.
 * @filename: text file
 * @letters: number of letters
 * Return: number of bytes read and printed
 * or 0 when function fails or filename is NULL.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t g;
	ssize_t w;
	ssize_t t;

	g = open(filename, O_RDONLY);
	if (g == -1)
		return (0);
	buff = malloc(sizeof(char) * letters);
	t = read(g, buff, letters);
	w = write(STDOUT_FILENO, buff, t);
	free(buff);
	close(g);
	return (w);
}
