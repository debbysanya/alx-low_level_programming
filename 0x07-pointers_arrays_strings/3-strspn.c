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
	int c;
	unsigned int count;

	c = 0;


	for (i = 0; s[i] != '\0'; i++)
	{
		count = 0;
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
			{
				c++;
				count = 1;
			}
		}
		if (count == 0)
		{
			return (c);
		}

	}
	return (c);
}
