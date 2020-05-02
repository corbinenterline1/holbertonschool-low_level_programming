#include "lists.h"

/**
 * add_dnodeint - Adds new node at head of doubly linked list
 * @head: double pointer to head of linked list
 * @n: integer data for new node
 * Return: New node pointer
 */
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));
	if (new == NULL)
		return (NULL);
	new->n = n;
	new->prev = NULL;
	new->next = *head;
	if (*HEAD != NULL)
		(*head)->prev = new;
	*head = new;
	return (new);
}
