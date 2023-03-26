#include "main.h"

/**
 * times_table - function to print times table
 * Return: always 0
 */

void times_table(void)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= 9; i++)
	{
		_putchar('0');
		for (j = 1; j <= 9; j++)
		{
			_putchar(',');
			_putchar(' ');

			prod = i * j;

			if (prod <= 9)
			{
				_putchar(' ');
			}
			else
			{
				_putchar(prod / 10 + '0');
			}
			_putchar(i * j % 10 + '0');
		}
		_putchar('\n');
	}
}
