#include "lists.h"
/**
 * insert_nodeint_at_index - insert a node at some index
 * @head: The head node
 * @idx: index given by main
 * @n: number to insert in the node
 * Return: @new  address of the new node
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *ptr;
	listint_t *tmp;
	unsigned int position = 1;/*It stars counting positions at 1*/

	ptr = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);
	ptr->n = n;
	if (idx == 0)
	{
		ptr->next = *head;
		*head = ptr;
		return (ptr);
	}
	if (*head == 0)
		return (NULL);
	tmp = *head;
	while (position < idx)
	{
		if (tmp == NULL)
			return (NULL);
		tmp = tmp->next;/*to put tmp in the place we want*/
		position++;
	}
	ptr->next = tmp->next;
	tmp->next = ptr;
	return (ptr);
}
