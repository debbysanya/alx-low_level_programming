#include "main.h"
/**
 * _memset - function to fill memory with a constant byte
 * @s: parameter
 * @b: parameter
 * @n: parameter
 * Return: char
 */
char *_memset(char *s, char b, unsigned int n)
{
	int i = 0;

	for (; n > 0; i++)
	{
		s[i] = b;
		n--;
	}
	return (s);
}
