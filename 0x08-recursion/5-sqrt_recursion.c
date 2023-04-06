#include "main.h"
/**
 * number - function to find square root of number given
 * @j: parameter
 * @root: parameter
 * Return: integer
 */
int number(int j, int root)
{
	if (j * j == root)
		return (j);
	else if (j == root)
		return (-1);
	return ((number(j + 1, (root))));
}
/**
 * _sqrt_recursion - function to print square root of a number
 * @n: parameter
 * Return: integer
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (number(1, n));
}
