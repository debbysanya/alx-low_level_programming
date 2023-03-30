#include "main.h"
/**
 * *_strncpy - function to copy a string
 * @dest: dest string
 * @src: src striing
 * @n: number of string to copy
 * Return: return string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	i = 0;

	while (i < n && src[i] != '\0')
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
