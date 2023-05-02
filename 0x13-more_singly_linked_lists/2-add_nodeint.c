#include "lists.h"

/**
 * add_nodeint - function that adds a new node
 * at the beginning of a linked list
 * @head: pointer
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *New;

	New = malloc(sizeof(listint_t));
	if (!New)
		return (NULL);
	New->n = n;
	New->next = *head;
	*head = New;
	return (New);
}
