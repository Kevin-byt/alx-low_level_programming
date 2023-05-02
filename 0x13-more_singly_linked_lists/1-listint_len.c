#include "lists.h"

/**
 * listint_len - gets the number of linked list elements
 * @h: linked list of type listint_t
 * Return: number of elements in linked list
 */

size_t listint_len(const listint_t *h)
{
	size_t elements = 0;

	while (h)
	{
		elements++;
		h = h->next;
	}

	return (elements);
}

