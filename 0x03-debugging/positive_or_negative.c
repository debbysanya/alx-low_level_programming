#include "main.h"
/**
 * positive_or_negative - function to check for positive or negative number
 *
 * @i: parameter to be checked
 *
 * Return: always 0
 */

void positive_or_negative(int i)
{
	if (i < 0)
	{
		printf("%d is negative", i);
	}
	else
		printf("%d is positive", i);
	printf("\n");
}

