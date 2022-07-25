#include "main.h"
#include <stdlib.h>

/**
 * create_array - function that creates an array of chars
 * and initializes it with a specific char.
 * @size: size of array
 * @c: input caharacter
 * Return: pointer to the array, or NULL if it fails
 */
char *create_array(unsigned int size, char c)
{
	unsigned int i;
	char *x;

	i = 0;
	x = malloc(sizeof(char) * size);

	if (x == NULL)
		return (NULL);
	if (size == 0)
		return (NULL);

	while (i < size)
	{
		x[i] = c;
		i++;
	}
	return (x);
}
