#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to pointer to head node of linked list
 * @idx: index of the list where the new node should be added.
 * @n: data for new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *curr, *new;
	unsigned int c = 0;

	new = malloc(sizeof(listint_t));
	if (new == NULL || head == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (idx == 0)
	{/* adding at head */
		new->next = *head;
		*head = new;
		return (new);
	}
	curr = *head;
	while (curr)
	{
		if (c == idx - 1)
		{
			new->next = curr->next;
			curr->next = new;
			return (new);
		}
		curr = curr->next;
		c++;
	}
	return (NULL);
}
