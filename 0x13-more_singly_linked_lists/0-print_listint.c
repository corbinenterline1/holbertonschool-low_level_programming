#include "lists.h"

/**
 * print_listint - prints all the elements of a listint_t list
 * @h: input pointer to linked list
 * print data from each node, until end of list. Count number of nodes
 * nc = node counter
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
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
