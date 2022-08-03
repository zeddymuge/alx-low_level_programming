#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - function that executes a function given as a
 * parameter on each element of an array.
 * @action: pointer to the function you need to use
 * @size: size of the array
 * @array: array
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int x;

	if (action == NULL || array == NULL)
		return;
	for (x = 0; x < size; x++)
		action(array[x]);
}

