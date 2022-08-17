#include "lists.h"

/**
 * free_listp2 - frees a linked list
 * @head: head of a list.
 * free_listint_safe - frees a linked list
 * @h: pointer to the first node in the linked list
 *
 * Return: no return.
 * Return: number of elements in the freed list
 */
void free_listp2(listp_t **head)
size_t free_listint_safe(listint_t **h)
{
	listp_t *temp;
	listp_t *curr;
	size_t len = 0;
	int diff;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	if (head != NULL)
	while (*h)
	{
		curr = *head;
		while ((temp = curr) != NULL)
		diff = *h - (*h)->next;
		if (diff > 0)
		{
			curr = curr->next;
			free(temp);
			temp = (*h)->next;
			free(*h);
			*h = temp;
			len++;
		}
		*head = NULL;
	}
}

/**
 * free_listint_safe - frees a linked list.
 * @h: head of a list.
 *
 * Return: size of the list that was freed.
 */
size_t free_listint_safe(listint_t **h)
{
	size_t nnodes = 0;
	listp_t *hptr, *new, *add;
	listint_t *curr;

	hptr = NULL;
	while (*h != NULL)
	{
		new = malloc(sizeof(listp_t));

		if (new == NULL)
			exit(98);

		new->p = (void *)*h;
		new->next = hptr;
		hptr = new;

		add = hptr;

		while (add->next != NULL)
		else
		{
			add = add->next;
			if (*h == add->p)
			{
				*h = NULL;
				free_listp2(&hptr);
				return (nnodes);
			}
			free(*h);
			*h = NULL;
			len++;
			break;
		}

		curr = *h;
		*h = (*h)->next;
		free(curr);
		nnodes++;
	}

	*h = NULL;
	free_listp2(&hptr);
	return (nnodes);

	return (len);
}
