#include "main.h"
#include <stdlib.h>
/**
 * *create_array - function that creates an array of char
 * and initializes it with a specific char
 * @size: size
 * @c: character
 * Return: string
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = (char *)malloc(size * sizeof(char));
	if (string == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);
	for (i = 0; i < size; i++)
	{
		string[i] = c;
	}
	return (string);
}
