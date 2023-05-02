#include "lists.h"

/**
 * get_nodeint_at_index - Returns the nth node of a listint_t linked list
 * @head: Pointer to the head node of the list
 * @index: Index of the node to return, starting at 0
 *
 * Return: Pointer to the nth node of the listi
 * , or NULL if the node does not exist
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int node_count = 0;
	listint_t *current_node = head;

	while (current_node != NULL)
	{
		if (node_count == index)
			return (current_node);

		node_count++;
		current_node = current_node->next;
	}
	return (NULL);
}
