#include "main.h"
/**
 * _isalpha - function for alphabet lower and upper case
 *
 * @c: parameter to be checked
 *
 * Return: return 1 if its a letter
 * and return 0 if its not
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
