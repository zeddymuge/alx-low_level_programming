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
	unsigned int x;
	char *arrayy;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arrayy = malloc(nmemb * size);
	if (arrayy == NULL)
		return (NULL);
	for (x = 0; x < size; x++)
	{
		arrayy[x] = 0;
	}

	return (arrayy);
}

