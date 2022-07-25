#include "main.h"
#include <stdlib.h>
/**
 * free_grid - A function that frees a 2D array of ints previously
 * @grid: An input 2D array of integers to free
 * @height: height of grid
 * Return: null
 */
void free_grid(int **grid, int height)
{
	int x = 0;

	if (grid == NULL)
		return;
	while (x < height)
		free((int *)grid[x++]);
	free(grid);
}
