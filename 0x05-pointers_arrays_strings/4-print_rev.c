#include "main.h"
/**
 * print_rev - function to print reverse strings
 * @s: parameter to be checked
 * Return: always 0
 */
void print_rev(char *s)
{
	int i;
	int j;
	int count = 0;

	for (i = 0; s[i] != '\0'; s++)
		count++;
	for (j = count; j >= 0; j--)
		_putchar(s[j]);
	_putchar('\n');
}
