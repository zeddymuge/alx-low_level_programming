#include <stdio.h>
#include <stdlib.h>
#include "lists.h"
/**
 * add_nodeint - adds a new node at the beginning of a list
 * @head: holds the adress of the first node
 * @n: size
 * Return: node
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *ptr;
	
	ptr = malloc(sizeof(struct listint_s));
	if (!ptr)
		return (NULL);
	
	ptr->n = n;
	ptr->next = *head;
	*head = ptr;

	return (ptr);
}

