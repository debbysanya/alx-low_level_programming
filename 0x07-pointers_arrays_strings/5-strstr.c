#include "main.h"
/**
 * _strstr - function that locates a substring
 * @haystack: parameter
 * @needle: parameter
 * Return: character
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; needle[i] != '\0'; i++)
	{
		for (j = 0; haystack[j] != '\0'; j++)
		{
			if (needle[i] == haystack[j])
			{
				return (needle + i);
			}

		}
	}
	return (0);
}
