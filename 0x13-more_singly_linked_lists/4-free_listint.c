#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * free_listint - Frees linked list from memory
 * @head: pointer to head node
 */
void free_listint(listint_t *head)
{
	listint_t *new;

	while (head)
	{
		new = head;
		head = head->next;
		free(new);
	}
	free(head);
}
