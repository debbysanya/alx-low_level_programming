#include "main.h"
/**
 * print_triangle - function
 * @size: parameter
 * Return: always 0
 */
void print_triangle(int size)
{
	int i;
	int j;

	for (i = 0; i < size; i++)
	{
		for (j = 1; j < (size - 1); j++)
		{
			_putchar(' ');
		}
		for (j--; j < size; j++)
			_putchar(35);
		if (i < (size - 1))
			_putchar('\n');
	}
	_putchar('\n');
}
