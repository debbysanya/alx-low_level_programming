#include "main.h"
/**
 * more_numbers - function to print more numbers
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			_putchar(j / 1 + '0');
			if (j > 9)
			{
				_putchar(j % 10 + '0');
			}
		}
		_putchar('\n');
	}
}
