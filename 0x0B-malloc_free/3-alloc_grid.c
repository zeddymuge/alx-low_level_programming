#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - A function that returns a pointer to a
 * 2 dimensional array of integers
 * @width: An input integer at number of columns
 * @height: An input integer at number of rows
 * Return: pointer to a 2D array, NULL on failure
 */
int **alloc_grid(int width, int height)
{
	int **array, x = 0, y = 0;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
			return (NULL);
	}

	for (x = 0; x < height; x++)
		for (; y < width; y++)
			array[x][y] = 0;
	return (array);
}
