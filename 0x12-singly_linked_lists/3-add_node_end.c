#include <stdio.h>
#include "lists.h"
/**
 * *add_node_end - function that adds a new node at the
 * end of a list
 * @head: head of list
 * @str: string to store in list
 * Return: address of head
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *new, *temp;
	size_t newChar;

	new = malloc(sizeof(list_t));
	if (new == NULL)
		return (NULL);
	new->str = strdup(str);

	for (newChar = 0; str[newChar]; newChar++)
		;
	new->len = newChar;
	new->next = NULL;
	temp = *head;

	if (temp == NULL)
	{
		*head = new;
	}
	else
	{
		while (temp->next != NULL)
			temp = temp->next;
		temp->next = new;
	}
	return (*head);
}
