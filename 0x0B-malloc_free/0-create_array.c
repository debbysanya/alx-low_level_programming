#include "main.h"
#include <stdlib.h>
/**
 * create_array - function that creates an array of char
 * and initializes it with a specific char.
 * @size: size
 * @c: character
 */
char *create_array(unsigned int size, char c)
{
	char *string;
	unsigned int i;

	string = malloc(size * sizeof(char));
	for (i = 0; i < size; i++)
	{
		if (size == 0 || size == NULL)
			return (NULL);
		string[i] = c;
	}
	return (string);
}
