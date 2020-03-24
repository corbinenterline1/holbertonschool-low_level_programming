#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * 
 *
 * 
 */
void free_listint2(listint_t **head)
{
	listint_t *tmp, *trav;

	if (*head == NULL || head == NULL)
		return;
	trav = *head;
	while (head && trav)
	{
		tmp = trav;
		trav = trav->next;
		free(tmp);
	}
	free(trav);
	*head = NULL;
}
