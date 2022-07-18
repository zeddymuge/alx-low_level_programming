<<<<<<< HEAD
#include "main.h"
#include <stdlib.h>
=======
#include <stdio.h>
#include "main.h"
>>>>>>> f5644cb18ffec6006289719ad3a1b22238ba4c96

/**
 * _strstr -  a function that locates a substring.
 * @haystack: an input string to search in
 * @needle: an input string to locate into string haystack
 * Return:  a pointer to the beginning of the located substring,
 * or NULL if the substring is not found.
 */
char *_strstr(char *haystack, char *needle)
{
	char *s = needle, *h = haystack;

	while (*haystack)
	{
		h = haystack;
		needle = s;
		while (*haystack == *needle)
		{
			haystack++;
			needle++;
		}

		if (*needle == '\0')
			return (haystack);
		haystack = h + 1;
	}
	return (NULL);
}
