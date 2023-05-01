#include "lists.h"


/**
 *listint_len - print a number of linked lists
 *@h: A pointer to the first of the list
 *
 *
 *Return: the size of list
*/

size_t listint_len(const listint_t *h)
{
	size_t i = 0;

	while (h)
	{
		i++;
		h = h->next;
	}
	return (i);
}
