#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * listint_len - Returns the number of elements in a linked listint_t list
 * @h: input listint_t linked list
 * Return: the number of elements
 */
size_t listint_len(const listint_t *h)
{
	int nc = 0;

	while (h != NULL)
	{
		nc++;
		h = h->next;
	}
	return (nc);
}
