#include "lists.h"

/**
 * get_nodeint_at_index - returns the nth node in a linked list
 * @head: first node in the linked list
 * @index: index of the node
 * Return: pointer to the node we're looking for, or NULL
 */

listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *tmp = head;
	unsigned int x = 0;

	while (tmp && x < index)
	{
		tmp = tmp->next;
		x++;
	}

	return (tmp ? tmp : NULL);
}

