#include "main.c"
/**
 * reverse_array - function
 * @a: parameter
 * @n: parameter
 * Return: always 0
 */

void reverse_array(int *a, int n)
{
	int i;
	int j;

	for (i = 0; i < n; i++)
	{
		n--;
		j = a[i];
		a[i] = a[n];
		a[n] = a[j];
	}
}
