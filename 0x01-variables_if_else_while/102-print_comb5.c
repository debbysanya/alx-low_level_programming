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

	for (i = 0; i < 100; i++)
	{
		for (j = 1; j < 100; j++)
		{
			putchar(i + '0');
			putchar(j + '0');
		}
	}
	putchar('\n');
	return (0);
}
