#include <stdio.h>
#include <stdarg.h>
#include <stdlib.h>
/**
 * print_numbers - function that prints numbers, followed by a new line
 * @separator: string comma
 * @n: number of arguments
 * Return: always 0
 */

void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list ap;
	unsigned int i, s;

	va_start(ap, n);
	for (i = 0; i < n; i++)
	{
		s = va_arg(ap, int);

		printf("%d", s);
		if (i != (n - 1) && separator != NULL)
			printf("%s", separator);
	}
	va_end(ap);
	printf("\n");
}
