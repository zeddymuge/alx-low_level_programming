#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - a function that prints the sum of the two
 * diagonals of a square matrix of integers.
 * @a : pointer
 * @size : size of an array
 * Returns: nothing
 */
void print_diagsums(int *a, int size)
{
	int x;
	int add;
	int sum;
	int large = size * size;

	for (x = 0; x < large; x += size + 1)
		sum += a[x];
	for (x = size - 1; x < large - 1; x += size - 1)
		add += a[x];

	printf("%d, %d\n", sum, add);
}


