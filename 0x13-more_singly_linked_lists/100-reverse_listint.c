#include "lists.h"

/**
 * reverse_listint - reverses nodes in linked list
 * @head: pointer to pointer of head node of linked list
 * Return: pointer to head node
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *curr, *next;
	/* null check */
	if (*head == NULL || head == NULL)
		return (NULL);
	curr = NULL;/* init */
	next = NULL;/* init */
	curr = *head;/* set ptr to head for manipulation */
	while (ptr) /* while not NULL */
	{/* head acts as prev node from first attempt */
		next = curr->next; /* save next */
		curr->next = *head; /* reverse */
		*head = curr; /* advance prev */
		curr = next; /* advance ptr */
	}
	return (*head);
}
