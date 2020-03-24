#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * get_nodeint_at_index - returns the nth node of a listint_t linked list.
 * @head: pointer to head node
 * @index: index of the node (from 0)
 * Return: pointer to nth spot, or NULL if non-existant
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp;
	unsigned int c;

	tmp = head;
	c = 0;
	while (tmp)
	{
		if (c == index)
			return (tmp);
		c++;
		tmp = tmp->next;
	}
	return (NULL);
}
