#include "lists.h"

/**
 * insert_dnodeint_at_index - Inserts a new node at a given position
 * @h: double pointer to head node
 * @idx: index of the list where the new node should be added, starts at 0
 * @n: given position for new node
 * Return: Address of new node, or NULL if failed
 */
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *curr, *new;
	unsigned int c = 0;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL || h == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	new->prev = NULL;
	if (idx == 0)
	{
		new->next = *h;
		(*h)->prev = new;
		*h = new;
		return (new);
	}
	curr = *h;
	while (curr)
	{
		if (c == idx - 1)
		{
			curr->next->prev = new;
			new->next = curr->next;
			new->prev = curr->prev;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		c++;
	}
	return (NULL);
}
