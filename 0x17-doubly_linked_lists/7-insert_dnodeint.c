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
	dlistint_t *curr, *new = malloc(sizeof(dlistint_t));
	unsigned int c = 0;

	if (new == NULL || h == NULL)
	{
		free(new);
		return (NULL);
	}
	curr = *h, new->n = n;
	new->next = NULL, new->prev = NULL;
	if (idx == 0 && curr == NULL)
	{/* will 3 on 1 line work below? */
		new->next = NULL, new->prev = NULL, *h = new;
		return (new);
	}
	while (curr)
	{
		if (idx == 0)
		{
			new->prev = NULL, new->next = curr;
			curr->prev = new, *h = new;
			return (new);
		}
		if (c == idx - 1)
		{
			curr->next->prev = new, new->next = curr->next;
			new->prev = curr, curr->next = new;
			return (new);
		}
		if (c < idx && curr->next->next == NULL)
		{
			curr = curr->next, new->prev = curr;
			new->next = NULL, curr->next = new;
			return (new);
		}
		curr = curr->next;
		c++;
	}
	free(new);
	return (NULL);
}
