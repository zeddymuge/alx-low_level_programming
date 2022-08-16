#include "lists.h"
/**
 * listint_len -  function that returns the number of elements
 * in a linked listint_t list.
 * @h: contain elements
 * Return: number of elements
 */

size_t listint_len(const listint_t *h)
{
	size_t nodes;

	while (h)
	{
		nodes++;
		h = h -> next;
	}

	return (nodes);
}
