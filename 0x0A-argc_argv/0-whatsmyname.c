#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[])
{

	if (argc == 1)
		printf("%s", argv[0]);
	printf("\n");
	return (0);
}
