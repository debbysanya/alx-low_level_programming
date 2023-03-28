#include "main.h"
/**
 * swap_int - function to swap the values of two integers
 * @a: parameter to be checked
 * @b: parameter to be checked
 * Return: always 0
 */
void swap_int(int *a, int *b)
{
	int i;

	i = *a;
	*a = *b;
	*b = i;
}
