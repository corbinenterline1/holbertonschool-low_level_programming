#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * list_len - Returns number of elements
 * @h: input list_t linked list
 * While list isn't null (at end), go into loop
 * Return: the number of nodes
 */
size_t list_len(const list_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		nc++;
		h = h->next;
	}
	return (nc);
}
