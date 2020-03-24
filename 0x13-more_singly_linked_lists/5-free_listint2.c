#include "lists.h"

/**
 * free_listint2 - Frees a listint_t list & sets head to NULL
 * @head: input pointer to pointer to head node of list
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *trav;

	if (*head == NULL || head == NULL)
		return;
	trav = *head;
	while (head)
	{
		tmp = trav;
		trav = trav->next;
		free(tmp);
	}
	free(trav);
	*head = NULL;
}
