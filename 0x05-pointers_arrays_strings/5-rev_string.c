#include "main.h"
/**
 * rev_string - function to print reverse
 * @s: parameter
 * Return: always 0
 */
void rev_string(char *s)
{
	int i = 0;
	int j;
	char c = s[0];
		
	while (s[i] != '0')
		i++;
	for (j = 0; j < i; j++)
	{
		i--;
		c = s[j];
		s[j] = s[i];
		s[i] = c;
	}
}
