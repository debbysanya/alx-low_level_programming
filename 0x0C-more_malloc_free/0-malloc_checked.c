#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - function to allocate memory using malloc
 * @b: parameter
 * Return: always 0
 */
void *malloc_checked(unsigned int b)
{
	void *str;

	str = malloc(b);
	if (str == NULL)
	{
		exit(98);
	}
	return (str);
}
