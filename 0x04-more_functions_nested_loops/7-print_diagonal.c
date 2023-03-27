#include "main.h"
/**
 * print_diagonal - function to print diagonal line
 * @n: parameter to be checked
 * Return: always 0
 */
void print_diagonal(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
		else
		{
			_putchar('\\');
			_putchar('\n');
		}
	}
	_putchar('\n');
}
