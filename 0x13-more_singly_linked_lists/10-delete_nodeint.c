#include "lists.h"

/**
 * delete_nodeint_at_index - Deletes the node at a given index
 * @head: A pointer to the address of the first node
 * @index: The index of the node deleted
 *
 * Return: On success - 1, -1  On failure
*/
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *node, *prev_node;
	unsigned int i = 0;

	if (!head || !*head)
		return (-1);

	if (!index)
	{
		node = *head;
		*head = (*head)->next;
		free(node);
		return (1);
	}

	node = *head;
	while (node)
	{
		if (i == index)
		{
			prev_node->next = node->next;
			free(node);
			return (1);
		}
		i++;
		prev_node = node;
		node = node->next;
	}
	return (-1);
}
