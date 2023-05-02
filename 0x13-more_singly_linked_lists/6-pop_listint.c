#include "lists.h"
#include <stdlib.h>

/**
 * pop_listint - Deletes the head node of a listint_t linked list
 * @head: Pointer to a pointer to the head node of the list
 *
 * Return: The integer value stored
 * in the old head node, or 0 if the list is empty
 */
int pop_listint(listint_t **head)
{
	int n;
	listint_t *old_head;

	if (*head == NULL)
		return (0);

	old_head = *head;
	n = old_head->n;
	*head = old_head->next;
	free(old_head);

	return (n);
}

