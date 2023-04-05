#include "main.h"
/**
 * _pow_recursion - function to be power of an integer
 * @x: integer
 * @y: integer
 * Return: integer
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	else if (y == 0)
		return (1);
	else if (x == 0)
		return (0);
	return (x * (_pow_recursion(x, y - 1)));
}
