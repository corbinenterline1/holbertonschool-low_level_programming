#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at index 'index' of a listint_t ll
 * @head: pointer to pointer to head node of linked list
 * @index: index of the list where the node should be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy, *prev;
	unsigned int c = 0;

	if (*head == NULL || head == NULL)/* if list is empty */
		return (-1);
	cpy = *head;
	if (index == 0)
	{/* deleting at head */
		*head = (*head)->next;
		free(cpy);
		return (1);
	}
	while (cpy)
	{
		if (c == index - 1)
		{
			prev->next = cpy->next;
			free(cpy);
			return (1);
		}
		prev = cpy;
		cpy = cpy->next;
		c++;
	}
	return (-1);
}
