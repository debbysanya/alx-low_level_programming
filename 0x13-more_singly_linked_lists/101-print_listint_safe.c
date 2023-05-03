#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - function that counts the number of unique nodes
 * in a looped listint_t linked list.
 * @head: A pointer to the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *temp, *tomps;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	temp = head->next;
	tomps = (head->next)->next;

	while (tomps)
	{
		if (temp == tomps)
		{
			temp = tomps;
			while (temp != tomps)
			{
				nodes++;
				temp = temp->next;
				tomps = tomps->next;
			}
			temp = temp->next;
			while (temp != tomps)
			{
				nodes++;
				temp = temp->next;
			}
			return (nodes);
		}
		temp = temp->next;
		tomps = (tomps->next)->next;
	}
	return (0);
}

/**
 * print_listint_safe - function that prints a listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t node, init = 0;

	node = looped_listint_len(head);

	if (node == 0)
	{
		for (; head != NULL; node++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}
	else
	{
		for (init = 0; init < node; init++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
		printf("-> [%p] %d\n", (void *)head, head->n);
	}
	return (node);
}
