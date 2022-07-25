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
	int **array, x = 0, y = 0, z, n;

	if (width <= 0 || height <= 0)
		return (NULL);

	array = (int **)malloc(sizeof(int *) * height);
	if (array == NULL)
		return (NULL);
	for (; x < height; x++)
	{
		array[x] = (int *)malloc(sizeof(int) * width);
		if (array[x] == NULL)
		{
			for (; y < x; y++)
			{
				free(array[y]);
			}
			return (NULL);
		}
	}
	for (z = 0; z < height; z++)
	{
		for (n = 0; n < width; n++)
			array[z][n] = 0;
	}
	return (array);
}
