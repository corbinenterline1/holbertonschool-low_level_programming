#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list & sets head to NULL
 * @head: input pointer to pointer to head node of list
 */
void free_listint2(listint_t **head)
{

	if (*head == NULL || head == NULL)
		return;
	while (head)
	{
		free(*head);
		*head = (*head)->next;
	}
	head = NULL;
}
