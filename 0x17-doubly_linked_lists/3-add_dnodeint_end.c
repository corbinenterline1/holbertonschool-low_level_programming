#include "lists.h"

/**
 * add_dnodeint_end - Adds new node at end of doubly linked list
 * @head: double pointer to head of linked list
 * @n: integer data for new node
 * Return: New node pointer
 */
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *new, *last;

	last = *head;
	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->next = NULL;
	if (*head == NULL)
	{
		*head = new;
		new->prev = NULL;
		return (new);
	}
	while (last->next != NULL)
		last = last->next;
	last->next = new;
	new->prev = last;
	return (new);
}
