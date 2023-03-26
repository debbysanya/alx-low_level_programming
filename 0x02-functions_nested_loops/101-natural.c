#include <stdio.h>
/**
 * main - main function
 * Return: always 0
 */
int main(void)
{
	int i;
	int sum = 0;

	for (i = 0; i < 1024; i++)
	{
		if (i % 3 == 0)
		{
			sum = sum + i;
		}
		if (i % 5 == 0)
		{
			sum = sum + i;
		}
	}
	printf("%d", sum);
	printf("\n");
	return (0);
}
