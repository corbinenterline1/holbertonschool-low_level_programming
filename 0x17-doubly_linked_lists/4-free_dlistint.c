#include "lists.h"

/**
 * free_dlistint - frees doubly linked list
 * @head: pointer to head of list
 */
void free_dlistint(dlistint_t *head)
{
	dlistint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
