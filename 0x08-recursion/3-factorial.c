#include "main.h"
/**
 * factorial - function to print the factorial of an integer
 * @n: integer
 * Return: integer
 */
int factorial(int n)
{
	if (n == 0)
		return (1);
	else if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
