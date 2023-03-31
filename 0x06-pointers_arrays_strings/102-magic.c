#include <stdio.h>
/**
 * main - function to make the code print a[2] = 98
 * Return: always 0
 */

int main(void)
{
	int n;
	int a[5];
	int *p;

	a[2] = 1024;
	p = &n;
	/*
	* - only one statement
	* - you are not allowed to code anything else than this line of code
	*/
	p[5] = 98;
	printf("a[2] = %d\n", a[2]);
	return (0);
}
