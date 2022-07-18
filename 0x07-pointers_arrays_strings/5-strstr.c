#include "holberton.h"
#include <stdlib.h>

/**
 *_strstr - find the first occurence
 *@haystack: string
 *@needle: string
 *
 *Return: the pointer to the first occurence
 */
#include <stdio.h>
char *_strstr(char *haystack, char *needle)
{

	int x = 0;
	int y = 0;
	int z, s;

	for (s = 0; needle[s]; s++)
	;
	if (s == 0)
	return (haystack);
	while (haystack[x])
	{
		if (haystack[x] == needle[y])
		{
			x++;
			y++;
			for (z = x; haystack[z]; z++)
			{
				if (needle[y] == '\0')
					return (&(haystack[x - 1]));
				if (haystack[z] != needle[y])
					break;
				y++;
			}
		}
		x++;
		y = 0;
	}
	return (NULL);
}
