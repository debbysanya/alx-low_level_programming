#include "main.h"
/**
 * _strpbrk - function to search a string for a set of bytes
 * @s: parameter
 * @accept: parameter
 * Return: character
 */
char *_strpbrk(char *s, char *accept)
{
	int i;

	int count = 0;

	for (i = 0; accept[i] != '\0'; i++)
	{
		count++;
	}
	for (i = 0; s[i] != '\0'; i++)
	{
		if (accept[i] == s[i])
		{
			return (*(s[i - count]));
		}
	}
	return (0);
}
