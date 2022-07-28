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
	int *new_array, x, len;

	if (min > max)
		return (NULL);
	len = max - min;
	new_array = malloc(sizeof(int) * (len + 1));

	for (x = 0; x <= len; x++)
	{
		new_array[x] = min++;
	}
	return (new_array);
}
