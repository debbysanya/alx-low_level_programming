#include "main.h"
/**
 * int _isupper - function to print uppercase
 * @c: parameter to be checked
 * Return: returns 1 if uppercase and
 * retunr 0 if not
 */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
	_putchar('\n');
}
