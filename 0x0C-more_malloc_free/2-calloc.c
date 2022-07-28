#include "main.h"
#include <stdlib.h>
/**
 * _calloc -allocated memoria for nmeb elemn de zise bytes
 * @nmemb: number of element in the array
 * @size: bytes for each position in array
 * Return: pointer void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int x = 0;
	char *space;

	if (nmemb == 0 || size == 0)
		return (NULL);

	space = malloc(nmemb * size);
	if (space == NULL)
		return (NULL);

	for (; x < nmemb * size; x++)
		*(space + x) = 0;

	return (space);
}
