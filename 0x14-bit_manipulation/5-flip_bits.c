#include "main.h"

/**
 * flip_bits - function that counts the number of bits to change
 * to get from one number to anoter
 * @n: first number
 * @m: second number
 * Return: number of bits to change
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i;
	int count = 0;

	unsigned long int curr;
	unsigned long int exec = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		curr = exec >> i;

		if (curr & 1)
			count++;
	}
	return (count);
}
