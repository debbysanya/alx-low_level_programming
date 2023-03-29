#include "main.h"
/**
 * print_rev - function to print reverse strings
 * @s: parameter to be checked
 * Return: always 0
 */
void print_rev(char *s)
{
	int i = 0;

	while (s[i] != '\0')
		i++;
	for (i = i - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}
