#include "lists.h"

/**
 * print_dlistint - Prints all the elements of a dlistint_t list
 * @h: Head node of list
 * Return: Number of nodes
 */
size_t print_dlistint(const dlistint_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		nc++;
	}
	return (nc);
}
