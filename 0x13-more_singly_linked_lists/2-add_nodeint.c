#include "lists.h"

/**
 * add_nodeint - adds a node to top
 *@head: A pointer to the first node
 *@n: the value for new node
 *
 *Return: pointer to new node
*/

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node = malloc(sizeof(listint_t));
	if (!head || !new_node)
		return (NULL);

	new->n = n;
	new->next = *head;

	*head = new;

	return (new);
}
