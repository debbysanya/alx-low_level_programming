#include "main.h"
/**
 * binary_to_unit - function that converts binary to
 * unsigned integer
 * @b: binary number
 * Return: unsigned integer
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int i;
	int len, base;

	if (!b)
		return (0);
	i = 0;

	for (len = 0; b[len] != '\0'; len++)
		;
	for (len--, base = 1; len >= 0; len--, base *= 2)
	{
		if (b[len] != '0' && b[len] != '1')
		{
			return (0);
		}
		if (b[len] & 1)
		{
			i += base;
		}
	}
	return (i);
}
