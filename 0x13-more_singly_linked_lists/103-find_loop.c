#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *top = head;
	listint_t *pat = head;

	if (!head)
		return (NULL);
	while (top && pat && pat->next)
	{
		pat = pat->next->next;
		top = top->next;
		if (pat == top)
		{
			top = pat;
			while (top != pat)
			{
				top = top->next;
				pat = pat->next;
			}
			return (pat);
		}
	}
	return (NULL);
}
