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
	int x, y;
	int add;
	int sum;

	for (x = 0; x < size; x++)
	{
		sum += a[(size + 1) * x];
		add += a[(size - 1) * (x + 1)];
		
	printf("%d, %d\n", sum, add);
}


