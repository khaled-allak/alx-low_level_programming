#include "lists.h"

/**
 * frree_listint - free a list of inits
 * @head: pointer to the first node
 *
 * Return: void
*/

void free_listint(listint_t *head)
{
	listint_t *node;

	while (head)
	{
		node = head;
		head = head->next;
		free(node);
	}
}
