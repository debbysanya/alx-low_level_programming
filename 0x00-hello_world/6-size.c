#include <stdio.h>
/**
 * main - This is the main function
 *
 * Return: always (0)
 */
int main(void)
{
	sizeof(int);
	sizeof(char);
	sizeof(long int);
	sizeof(long long int);
	sizeof(float);

	printf("size of a char: %ld byte(s)\n", sizeof(char));
	printf("size of an int: %ld byte(s)\n", sizeof(int));
	printf("size of a long int: %ld byte(s)\n", sizeof(long int));
	printf("size of a long long int: %ld byte(s)\n", sizeof(long long int));
	printf("size of a float: %ld byte(s)\n", sizeof(float));
	return (0);
}





























