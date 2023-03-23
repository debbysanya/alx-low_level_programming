#include "main.h"
/**
 * print_last_digit - function for printing the last digit
 * @n: parameter to be checked
 * Return: return number
 */
int print_last_digit(int n)
{
	int k;

	k = n % 10;
	if (k < 0)
		k *= -(1);
	_putchar(k + '0');
	return (k);
}

