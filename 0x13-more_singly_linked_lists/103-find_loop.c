#include "lists.h"

/**
 * find_listint_loop - finds the loop in a linked list
 * @head: linked list to search for
 * Return: address of the node where the loop starts, or NULL
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *polepole = head;
	listint_t *haraka = head;

	if (!head)
		return (NULL);

	while (polepole && haraka && haraka->next)
	{
		haraka = haraka->next->next;
		polepole = polepole->next;
		if (haraka == polepole)
		{
			polepole = head;
			while (polepole != haraka)
			{
				polepole = polepole->next;
				haraka = haraka->next;
			}
			return (haraka);
		}
	}

	return (NULL);
}

