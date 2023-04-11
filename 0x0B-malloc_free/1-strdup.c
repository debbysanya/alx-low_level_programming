#include "main.h"
#include <stdlib.h>
/**
 * *_strdup - function that returns a pointer
 * to a newly allocated space in memory,
 * which contains a copy of the string given as a parameter.
 * @str: string
 * Return: character
 */
char *_strdup(char *str)
{
	char *copy;
	int i, n;

	i = 1;

	if (str == NULL)
		return (NULL);
	while (str[i] != '\0')
		i++;
	copy = malloc(i * sizeof(char));
	if (copy == NULL)
		return (NULL);
	for (n = 0; n < i; n++)
	{
		copy[n] = str[n];
	}
	return (copy);
}
