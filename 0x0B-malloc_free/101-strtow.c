#include "main.h"
#include <stdlib.h>
/**
 * strtow - splits a string into words.
 * @str: string to be splitted
 * Return: pointer to an array of strings (words) or null
 */
char **strtow(char *str)
{
	char **array;
	int i = 0, j, m, l, k = 0, len = 0, words = 0;

	if (str == NULL || str[0] == '\0')
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		if (str[i] != ' ' && (str[i + 1] == ' ' || str[i + 1] == '\0'))
			words++;

	if (words == 0)
		return (NULL);
	array = malloc((words + 1) * sizeof(char *));
	if (array == NULL)
	{
		free(array);
		return (NULL);
	}
	for (i = 0; str[i] != '\0' &&  k < words; i++)
	{
		if (str[i] != ' ')
		{
			len = 0;
			for (j = i; str[j] != ' ' && str[j] != '\0'; j++)
				len++;
			array[k] = malloc((len + 1) * sizeof(char));
			if (array[k] == NULL)
			{
				for (m = 0; m < k; m++)
					free(array[k]);
				free(array);
				return (NULL);
			}
			for (l = 0; l < len; l++, i++)
				array[k][l] = str[i];
			array[k][l] = '\0', k++;
		}
	}
	array[k] = NULL;
	return (array);
}


