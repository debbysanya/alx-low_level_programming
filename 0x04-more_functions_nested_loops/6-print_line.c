#include "main.h"
/**
 * print_line - function to print a straight line
 *
 * @n: parameter to be checked
 *
 * Retur: always 0
 */
void print_line(int n)
{
	int c;

	for (c = 1; c <= n; c++)
	{
		if (n == 0 && n < 0)
		{
			_putchar('\n');
		}
		else
			_putchar('_');
	}
	_putchar('\n');
}
