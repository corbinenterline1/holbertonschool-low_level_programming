#include "lists.h"

/**
 *
 *
 */
int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *cpy, *tmp;
	unsigned int c = 0;

	if (head == NULL || *head == NULL)
		return (-1);
	cpy = *head;
	if (index == 0 && cpy != NULL)
	{

		tmp = cpy->next;
		free(cpy);
		tmp->prev = NULL;
		*head = tmp;
		return (1);
	}
	while (cpy)
	{
		if (cpy == NULL)
			return (-1);
		if (c == index - 1)
		{

			tmp = cpy->next;
			cpy->next->prev = cpy;
			cpy->next = tmp->next;
			free(tmp);
			return(1);
		}
		cpy = cpy->next;
		c++;
	}
	return (-1);
}
