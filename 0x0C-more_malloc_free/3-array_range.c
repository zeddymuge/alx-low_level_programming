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
	int *arrayy, x = 0;

	if (min > max)
		return (0);
	arrayy = malloc((max - min + 1) * sizeof(int));

	if (!arrayy)
		return (0);
	while (x <= max - min)
		arrayy[x++] = min++;
	return (arrayy);
}
