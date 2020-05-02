#include "lists.h"

/**
 * get_dnodeint_at_index - Returns the nth node of a dlistint_t linked list
 * @head: Pointer to head node
 * @index: index of the node, from 0
 * Return: Pointer to nth node, or NULL if n/a
 */
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *new;
	unsigned int nc = 0;

	new = head;
	while (nc <= index)
	{
		if (new == NULL)
			return (NULL);
		new = head;
		head = head->next;
		nc++;
	}
	return (new);
}
