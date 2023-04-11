#include <stdio.h>
/**
 * main - main function
 * @argc: argument count
 * @argv: argument vector
 * Return: always 0
 */
int main(int argc, char *argv[] __attribute__ ((unused)))
{
	int i;
	int s;

	for (i = 0; i < argc; i++)
	s = i;
	printf("%d\n", s);

	return (0);
}
