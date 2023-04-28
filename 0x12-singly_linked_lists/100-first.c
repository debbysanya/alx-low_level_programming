#include <stdio.h>
/**
 * myfunc - function
 * Return: always 0
 */
void __attribute__ ((constructor)) myfunc()
{
	printf("You're beat! and yet, you must allow");
	printf(",\nI bore my house upon my back!\n");
}
