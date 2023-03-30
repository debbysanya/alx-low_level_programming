#include "main.h"
/**
 * *_strcat - function
 * @dest: parameter
 * @src: parameter
 * Return: return string
 */
char *_strcat(char *dest, char *src)
{
	int i;
	int j;

	for (i = 0; dest[i] != '\0'; i++)
	{
		for (j = 0; src[j] <= '\0'; j++)
			_putchar(dest[i] + src[j]);
	}
	return (0);
}
