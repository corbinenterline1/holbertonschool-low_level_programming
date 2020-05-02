#include "lists.h"

/**
 * dlistint_len - Returns the number of numbers
 * @h: Head node of list
 * Return: Number of nodes
 */
size_t dlistint_len(const dlistint_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		h = h->next;
		nc++;
	}
	return (nc);
}
