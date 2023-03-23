#include "main.h"
/**
 * _islower - checks for lowercase character
 * @c: parameter to be checked
 * Return: return 1 if its a lower case
 * and return 0 if not
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
