#include <stdio.h>
#include "lists.h"
#include <stdlib.h>

/**
 * free_listint_safe - A function that frees a list
 * @h: A pointer listint_t structure
 * Return: The size of the list that was free'd
 */
size_t free_listint_safe(listint_t **h)
{
	listnode_t *nodes = NULL;
	listint_t *current;
	size_t count = 0;

	if (h == NULL)
		return (0);

	/* while you have not encountered a loop */
	while (!is_in_nodes(nodes, *h))
	{
		if (!add_nodeptr(&nodes, *h))
		{
			free_listnode(nodes);
			exit(98);
		}

		current = *h;
		*h = (*h)->next;
		free(current);

		count++;
	}

	if (*h != NULL)
		*h = NULL;

	free_listnode(nodes);
	return (count);
}
