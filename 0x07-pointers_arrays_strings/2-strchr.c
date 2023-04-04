#include "main.h"
/**
 * _strchr - function to locate character of a string
 * @s: character to be checked
 * @c: parameter to be located in s
 * Return: character checked
 */
char *_strchr(char *s, char c)
{
	int i;
	int j;

	j = c;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == j)
			return (&s[i]);
	}
	return (0);
}
