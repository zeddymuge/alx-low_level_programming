#include "main.h"
#include <stdlib.h>
/**
 * _strdup - A function that returns a pointer to a newly allocated
 * space in memory, which contains a copy of the string given as a
 * parameter
 * @str: An input pointer of the string to copy.
 * Return: Apointer to new string or NULL if it str is NULL
 */
char *_strdup(char *str)
{
	char *new_str, *x;
	int y = 0, len = 0;

	if (str == NULL)
		return (NULL);
	x = str;
	while (*str)
	{
		len++;
		str++;
	}
	str = x;
	new_str = malloc(sizeof(char) * (len + 1));
	x = new_str;
	if (new_str != NULL)
	{
		for (; y < len; y++)
		{
			new_str[y] = *str;
			str++;
		}
		new_str[y] = '\0';
		return (x);
	}
	else
		return (NULL);
}

