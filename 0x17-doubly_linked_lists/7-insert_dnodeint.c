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
	unsigned int c = 0, a = 0;

	curr = *h;
	a = listy(curr);
	if (a == idx)
	{
		add_dnodeint_end(&curr, n);
		return (curr);
	}
	new = malloc(sizeof(dlistint_t));
	new->n = n;
	new->next = NULL, new->prev = NULL;
	if (new == NULL)
		return (NULL);
	while (curr)
	{
		if (idx == 0)
		{
			new->next = curr, curr->prev = new, *h = new;
			return (new);
		}
		if (c == idx - 1)
		{
			new->n = n;
			curr->next->prev = new, new->next = curr->next;
			new->prev = curr, curr->next = new;
			return (new);
		}
		else if (curr->next->next == NULL)
			return (NULL);
		curr = curr->next;
		c++;
	}
	free(new);
	return (NULL);
}
/**
 * listy - non constant list length finder
 * @h: pointer to head
 * Return: list length
 */
unsigned int listy(dlistint_t *h)
{
	unsigned int nc = 0;

	while (h != NULL)
	{
		h = h->next;
		nc++;
	}
	return (nc);
}
