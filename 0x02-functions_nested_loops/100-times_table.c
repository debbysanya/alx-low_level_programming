#include "main.h"
/**
 * print_times_table - function to print n times table
 * @n: parameter to be checked
 * return: always 0
 */
void print_times_table(int n)
{
	int i;
	int j;
	int prod;

	for (i = 0; i <= n; i++)
	{
		if (n <= 15 && n >= 0)
		{
			_putchar('0');
			for (j = 1; j <= n; j++)
			{
				_putchar(',');
				_putchar(' ');

				prod = i * j;

				if (prod <= 9)
				{
					_putchar(' ');
					_putchar(' ');
				}
				else if (prod >= 10 && prod <= 99)
				{
					_putchar(' ');
					_putchar(prod / 10 + '0');
				}
				else
				{
					_putchar(prod / 100 + '0');
					_putchar((prod / 10) % 10 + '0');
				}
				_putchar(prod % 10 + '0');
			}
			_putchar('\n');
		}
	}
}
