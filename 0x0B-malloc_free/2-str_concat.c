#include "main.h"
#include <stdlib.h>
/**
 * str_concat - A function that concatenates two strings
 * @s1: An input pointer of the first string
 * @s2: An input pointer of the second string
 * Return: Apointer to concatened strings or NULL if it str is NULL
 */
char *str_concat(char *s1, char *s2)
{
	char *new_str, *x, *y;
	int i = 0, lens1 = 0, lens2 = 0;

	x = s1;
	y = s2;
	if (s1 == NULL)
		s1 = "";
	while (*s1)
	{
		lens1++;
		s1++;
	}
	s1 = x;
	if (s2 == NULL)
		s2 = "";
	while (*s2)
	{
		lens2++;
		s2++;
	}
	s2 = y;
	new_str = malloc(sizeof(char) * (lens1 + lens2 + 1));
	x = new_str;
	if (new_str == NULL)
		return (NULL);
	for (; i < (lens1 + lens2); i++)
	{
		if (i < lens1)
		{
			new_str[i] = *s1;
			s1++;
		}
		else
		{
			new_str[i] = *s2;
			s2++;
		}
	}
	new_str[i] = '\0';
	return (x);
}
