#include "main.h"
/**
 * _strspn - function to get the length of a prefix substring
 * @s: parameter
 * @accept: parameter
 * Return: length
 */
unsigned int _strspn(char *s, char *accept)
{
	int i;
	int j;
	unsigned int count;

	count = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				count++;
			else if (accept[j + 1] == '\0')
				return (count);
		}
	}
	return (count);
}
