#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * argstostr - function that concatenates all the arguments of your program
 *
 * @ac: argument count
 * @av: pointer to a string of pointers to strings
 *
 * Return: address of the newly allocated memory
 */

char *argstostr(int ac, char **av)
{
	int x, y, z;
	int len = 0;
	char *arg_concat;

	if (ac == 0 || av == NULL)
		return (NULL);

	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++)
			len++;
		len++;
	}
	len++;

	arg_concat = malloc(len * sizeof(char));
	if (arg_concat == NULL)
	{
		free(arg_concat);
		return (NULL);
	}

	z = 0;
	for (x = 0; x < ac; x++)
	{
		for (y = 0; av[x][y] != '\0'; y++, z++)
		{
			arg_concat[z] = av[x][y];
		}
		arg_concat[z] = '\n';
		z++;
	}
	return (arg_concat);
}
