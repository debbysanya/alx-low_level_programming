#include "main.h"
/**
 * _abs - function to print absolute value of an integer
 * @a: parameter to be checked
 * Return: always a
 */
int _abs(int a)
{
	if (a < 0)
		a *= -(1);
	else
		a = a;
	return (a);
}
