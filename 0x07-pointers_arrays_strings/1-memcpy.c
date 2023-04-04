#include "main.h"
/**
 * _memcpy - function to copy memory are
 * @dest: destination memory
 * @src:  source memory
 * @n: byte of memory to be copied
 * Return: pointer to destination
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	int i;
	int j;

	j = n;

	for (i = 0; i < j; i++)
	{
		dest[i] = src[i];
		n--
	}
	return (dest);
}
