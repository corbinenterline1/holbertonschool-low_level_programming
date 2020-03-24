#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
#include <string.h>

/**
 * sum_listint - Returns the sum of all the data of a listint_t list
 * @head: pointer to head node
 * Return: total sum in (b)ucket
 */
int sum_listint(listint_t *head)
{
	listint_t *tmp;
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
