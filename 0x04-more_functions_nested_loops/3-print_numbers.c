#include "main.h"

/**
 * print_numbers - function to print numbers
 *
 * Return: always 0
 */

void print_numbers(void)
{
	char i;

	for (i = '0'; i <= '9'; i++)
	{
		_putchar(i);
	}
	_putchar('\n');
}