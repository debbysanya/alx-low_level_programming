#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * sum_them_all - function that returns the sum of all its parameters
 * @n: number of parameter
 * Return: sum
 */

int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, s, sum = 0;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, int);
		sum += s;
	}
	va_end(ap);
	return (sum);
}
