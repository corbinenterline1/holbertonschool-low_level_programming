#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"

/**
 * insert_nodeint_at_index - Inserts a new node at a given position
 * @head: pointer to pointer to head node of linked list
 * @idx: index of the list where the new node should be added.
 * @n: data for new node
 * Return: address of the new node, or NULL if it failed
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *trav, *tmp;
	unsigned int c;

	if (*head == NULL || head == NULL)
		return (NULL);
	trav = *head;
	c = 0;
	while (trav && c != idx)
	{
		trav = trav->next;
		if (trav == NULL)
			return (NULL);
		c++;
	}
	tmp = malloc(sizeof(listint_t));
	if (tmp == NULL)
		return (NULL);
	tmp->n = n;
	if (idx == 0)
	{
		tmp->next = *head;
		*head = tmp;
		return (tmp);
	}
	tmp->next = trav->next;
	trav->next = tmp;
	return (tmp);
}
