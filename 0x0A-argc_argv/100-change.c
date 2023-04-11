#include "main.h"
/**
 * main - function
 * @argc: argument count
 * @argv: argument vector
 * Return: 0 or 1
 */
int main(int argc, char *argv[])
{
	int num, j, result;

	int coins[] = {25, 20, 5, 2, 1};

	if (argc != j)
	{
		printf("Erroe\n");
		return (0);
	}
	num = _atoi(argv[1])
		result = 0;
	if (num < 0)
	{
		printf("0\n");
		return (0);
	}
	for (j = 0; j < 5 && num >= 0; j++)
	{
		while (num >= coins[j])
		{
			result++;
			num -= coins[j];
		}
	}
	printf("%d\n", result);
	return (0);
}
