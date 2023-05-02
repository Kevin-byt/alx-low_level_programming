#include "lists.h"

/**
 * sum_listint - Sums all the data in a listint_t list
 * @head: first node in the linked list
 * Return: The sum
 */

int sum_listint(listint_t *head)
{
	int summation = 0;
	listint_t *tmp = head;

	while (tmp)
	{
		summation += tmp->n;
		tmp = tmp->next;
	}

	return (summation);
}

