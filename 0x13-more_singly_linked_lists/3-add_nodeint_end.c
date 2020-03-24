#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * add_nodeint_end - Adds a new node at the end of a listint_t list.
 * @head: pointer to pointer to head of a linked list
 * @n: integer data for new node
 * Return: address of new element, or NULL if failed
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new, *last;

	last = *head;/*used in while loop */
	/* allocate new node */
	new = malloc(sizeof(listint_t));
	if (new == NULL)/* (!(new)) would that substitute? */
		return (NULL);
	/* put in data */
	new->n = n;
	new->next = NULL; /* new node is last, so make next point to NULL */
	/* if linked list is empty, make new node head */
	if (*head == NULL)
	{
		*head = new;
		return (new);
	}
	/* traverse to last node */
	while (last->next != NULL)
		last = last->next;
	/* change next of last node */
	last->next = new;
	return (new);
}
