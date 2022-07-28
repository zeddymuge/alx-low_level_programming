#include "main.h"
#include <stdlib.h>
/**
 * _realloc -  reallocates a memory block using malloc and free
 * @ptr: pointer
 * @old_size: old size
 * @new_size: new size
 * Return: pointer
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	{
	char *new_space, *new_ptr;
	unsigned int x = 0;

	if (new_size == old_size)
		return (ptr);
	if (ptr == NULL) /* treat as normal malloc */
	{
		ptr = malloc(new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	if (new_size == 0 && ptr)
	{
		free(ptr);
		return (NULL);
	}
	new_space = malloc(new_size);
	new_ptr = ptr;
	if (old_size > new_size)
		old_size = new_size;
	for (x = 0; x < old_size; x++)
		new_space[x] = new_ptr[x];
	free(ptr);
	return (new_space);
}
