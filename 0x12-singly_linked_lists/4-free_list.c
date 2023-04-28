#include <stdio.h>
#include "lists.h"
/**
 * free_list - function that frees a list
 * @head: list
 */
void free_list(list_t *head)
{
	list_t *new;

	new = head;

	while (new != NULL)
	{
		free(new->str);
		free(new);
		new = new->next;
	}

}
