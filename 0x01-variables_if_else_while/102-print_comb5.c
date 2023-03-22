#include <stdio.h>
/**
 * main - main function
 *
 * Return: always 0
 */

int main(void)
{
	int i;
	int j;

	for (i = 00; i < 100; i++)
	{
		for (j = 01; j < 100; j++)
		{
			if (i < j)
			{
				putchar(i + '0');
				putchar(j + '0');
				putchar(',');
				putchar(' ');
			}
		}
	}
	putchar('\n');
	return (0);
}
