#include "lists.h"

/**
 * find_listint_loop - Finds the loop contained in
 *                     a listint_t linked list.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: If there is no loop - NULL.
 *         Otherwise - the address of the node where the loop starts.
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *tor, *har;

	if (head == NULL || head->next == NULL)
		return (NULL);

	tor = head->next;
	har = (head->next)->next;

	while (har)
	{
		if (tor == har)
		{
			tor = head;

			while (tor != har)
			{
				tor = tor->next;
				har = har->next;
			}

			return (tor);
		}

		tor = tor->next;
		har = (har->next)->next;
	}

	return (NULL);
}
