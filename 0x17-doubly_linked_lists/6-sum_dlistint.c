#include "lists.h"

/**
 * sum_dlistint - Returns the sum of all the data of a dlistint_t list
 * @head: pointer to head node
 * Return: total sum in (b)ucket
 */
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *tmp;
	int b = 0;

	tmp = head;
	if (tmp == NULL)
		return (0);
	while (tmp)
	{
		b += tmp->n;
		tmp = tmp->next;
	}
	return (b);
}
