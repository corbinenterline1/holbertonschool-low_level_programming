#include "lists.h"

/**
 * insert_nodeint_at_index - inserts new node at index n
 * @head: pointer to pointer of head node of linked list
 * @idx: index of the list where the new node should be added
 * @n: data for new node
 * Return: pointer to new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i;
	listint_t *new;
	listint_t *p;

	if (head == NULL)
		return (NULL);
	new = malloc(sizeof(listint_t));
	p = *head;

	if (new == NULL)
		return (NULL);
	new->n = n;
	for (i = 0; p != NULL && i < idx - 1; i++)
		p = p->next;
	if (p == NULL && i != 0)
	{
		free(new);
		return (NULL);
	}
	if (i == 0)
	{
		*head = new;
		new->next = p;
	}
	else
	{
		new->next = p->next;
		p->next = new;
	}
	return (new);
}
