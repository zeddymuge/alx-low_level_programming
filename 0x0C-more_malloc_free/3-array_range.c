#include "main.h"
#include <stdlib.h>
/**
 * array_range - creates an array of integers
 * @min: minimum
 * @max: maximum
 * Return: array
 */
int *array_range(int min, int max)
{
	int i, len;
	int *ptr;

	for (i = min; i <= max; i++)
		len++;

	ptr = malloc(len * sizeof(int));

	if (ptr == NULL)
		return (NULL);
	if (min > max)
		return (NULL);
	for (i = min; i <= max; i++)
		ptr[i] = min++;
	return (ptr);
}
