#include "main.h"
/**
 * _isdigit - function that checks for a digit
 *
 * @c: parameter to be checked
 *
 * Return: return 1 if it's a digit and
 * 0 if otherwise
 */
int _isdigit(int c)
{
	if (c >= 0 && c <= 9)
		return (1);
	else
		return (0);
	_putchar('\n');
}
