#include "main.h"
#include <stdlib.h>
/**
 * *str_concat - function that concatenates two strings
 * @s1: first string
 * @s2: second string
 * Return: concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	char *coct;
	int i = 1;
	int j = 1;
	int k;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	k = i + j;
	coct = malloc(k + 1 * sizeof(char));
	if (coct == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		coct[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++, i++)
		coct[i] = s2[j];
	coct[i] = '\0';
	return (coct);
}
