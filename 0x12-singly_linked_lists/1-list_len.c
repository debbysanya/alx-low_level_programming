#include <stdio.h>
#include "lists.h"
/**
 * list_len - function that returns the number of
 * elements in a linked list_t list
 * @h: struct pointer
 * Return: number of elements
 */
size_t list_len(const list_t *h)
{
	unsigned int i;

	for (i = 0; h != NULL; i++)
		h = h->next;
	return (i);
}
