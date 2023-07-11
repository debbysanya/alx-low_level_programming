#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buff(char *file);
void close_file(int g);

/**
 * create_buff - Function that allocates 1024 bytes for a buffer.
 * @file: name of file buffer is storing chars for.
 * Return: pointer to the newly-allocated buffer.
 */
char *create_buff(char *file)
{
	char *buff;

	buff = malloc(sizeof(char) * 1024);

	if (buff == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buff);
}
/**
 * close_file - function that closes file descriptors.
 * @g: The file descriptor to be closed.
 */
void close_file(int g)
{
	int h;

	h = close(g);
	if (h == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close g %d\n", g);
		exit(100);
	}
}
/**
 * main - Function that copies the contents of a file to another file.
 * @argc: number of arguments supplied to the program.
 * @argv: array of pointers to the arguments.
 *
 * Return: always 0
 *
 * Description: If the argument count is incorrect - exit code 97.
 * If file_from does not exist or cannot be read - exit code 98.
 * If file_to cannot be created or written to - exit code 99.
 * If file_to or file_from cannot be closed - exit code 100.
 */
int main(int argc, char *argv[])
{
	int from, to, i, j;
	char *buff;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buff = create_buff(argv[2]);
	from = open(argv[1], O_RDONLY);
	i = read(from, buff, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || i == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buff);
			exit(98);
		}
		j = write(to, buff, i);
		if (to == -1 || j == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buff);
			exit(99);
		}
		i = read(from, buff, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (i > 0);
	free(buff);
	close_file(from);
	close_file(to);
	return (0);
}
