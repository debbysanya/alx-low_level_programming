#include "main.h"
/**
 * print_sign - function to print sign of numbers
 * @n: parameter to be checked
 * Return: returns 1 if greater than zero
 * and return 0 if its zero
 * and return -1 if less than zero
 */
int print_sign(int n)
{
	if (n > 0)
		return (1);
	else if (n == 0)
		return (0);
	else
		return (-1);
}
