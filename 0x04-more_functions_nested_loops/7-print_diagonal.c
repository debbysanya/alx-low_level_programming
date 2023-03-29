#include "main.h"
/**
 * print_diagonal - function to print diagonal line
 * @n: parameter to be checked
 * Return: always 0
 */
void print_diagonal(int n)
{
	int c;
	int j;

	for (c = 0; c < n; c++)
	{
		for (j = 0; j < c; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		if (c <(n - 1))
			_putchar('\n');
	}
	_putchar('\n');

}
