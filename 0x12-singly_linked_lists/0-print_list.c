#include <stdio.h>
#include "lists.h"
/**
 * print_list - function to print all the element of list_t
 * @h: singly linked list
 * Return: elements number
 */
size_t print_list(const list_t *h)
{
	size_t num_element;

	num_element = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
			printf("[%d] %s\n", 0, "(nil)");
		else
			printf("[%d] %s\n", h->len, h->str);
		h = h->next;
		num_element++;
	}
	return (num_element);
}
