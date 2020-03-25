#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes a node at index 'index' of a listint_t ll
 * @head: pointer to pointer to head node of linked list
 * @index: index of the list where the node should be deleted
 * Return: 1 if successful, -1 otherwise
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *cpy, *tmp;
	unsigned int c = 0;

	if (head == NULL || *head == NULL)/* if list is empty */
		return (-1);
	cpy = *head;
	if (index == 0)
	{/* deleting at head */
		tmp = cpy->next;
		free(cpy);
		*head = tmp;
		return (1);
	}
	while (cpy)
	{
		if (cpy == NULL)
			return (-1);
		/*
		 * if (c == 1 && index == 1)
		 *{
		 *	tmp = cpy->next;
		 *	free(cpy);
		 *	(*head)->next = tmp;
		 *	return (1);
		 *}
		 */
		if (c == index - 1)
		{
			tmp = cpy->next;
			cpy->next = tmp->next;
			free(tmp);
			return (1);
		}
		cpy = cpy->next;
		c++;
	}
	return (-1);
}
