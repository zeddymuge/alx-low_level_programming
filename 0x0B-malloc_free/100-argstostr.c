#include "main.h"
#include <stdlib.h>
/**
 * argstostr - A function that concatenates all arguments of your program
 * @ac: number of arguments
 * @av: array containing arguments
 * Return: A pointer to string that containing all arguments
 * or NULL if ac == 0, if av == NULL, or upon failure
 */
char *argstostr(int ac, char **av)
{
	char *new_str;
	int len = 0, w = 0, x = 0, y = 0;

	if (ac <= 0 || av == NULL)
		return (NULL);
	for (; w < ac; w++)
	{
		for (; av[w][x]; x++)
			len++;
		len++;
	}
	len++;
	new_str = malloc(len * sizeof(char));
	if (new_str == NULL)
		return (NULL);
	for (w = 0; w < ac; w++)
	{
		for (x = 0; av[w][x]; x++)
		{
			new_str[y] = av[w][x];
			y++;
		}
		new_str[y] = '\n';
		y++;
	}

	new_str[y] = '\0';
	return (new_str);
}


