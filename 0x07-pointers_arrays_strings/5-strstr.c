#include "main.h"
#include <stdio.h>
/**
 * _strstr - a function that locates a substring.
 * @haystack: an input string
 * @needle: an input string
 * Return: pointer to the beginning of the located substring,
 * or NULL if no such byte is found
 */
char *_strstr(char *haystack, char *needle)
{
	char *y = needle;
	
	while (*haystack)
	{
		y = needle;
		while (*haystack == *needle)
		{
			needle++;
			haystack++;
		}
		if (*needle == '\0')
			return (haystack);
		haystack = y + 1;
	}
	return (NULL);
}

