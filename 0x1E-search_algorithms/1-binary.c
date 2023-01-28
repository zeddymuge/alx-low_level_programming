#include "search_algos.h"
/**
 * print_array - prints the array
 * @array: pointer to first element of array
 * @left: left index
 * @right: right index
 * Return: void
 */
void print_array(int *array, int left, int right)
{
	int i;

	printf("Searching in array: ");

	for (i = left; i < right; i++)
	{
		printf("%d, ", array[i]);
	}
	printf("%d\n", array[i]);
}
/**
 * recurse_array - iterates array recursively to find index of value
 * @array: the array
 * @left: left index
 * @right: right index
 * @value: value to search for
 * Return: index of value
 */
int recurse_array(int *array, int left, int right, int value)
{
	int mid;

	print_array(array, left, right);
	mid = (left + right) / 2;

	if (array[mid] == value)
		return (mid);
	if (left == right)
		return (-1);
	if (value > array[mid])
		return (recurse_array(array, mid + 1, right, value));
	else
		return (recurse_array(array, left, mid - 1, value));
}

/**
 * binary_search -  searches for a value in a sorted array of integers
 * using the Binary search algorithm
 * @array: a pointer to the first element of the array to search in
 * @size: the number of elements in array
 * @value: the value to search for
 * Return: the index where value is located
 */
int binary_search(int *array, size_t size, int value)
{
	if (!array)
		return (-1);

	return (recurse_array(array, 0, size - 1, value));
}
