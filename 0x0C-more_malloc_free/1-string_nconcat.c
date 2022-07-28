#include "main.h"
#include <stdlib.h>
/**
 * string_nconcat - function that concatenates two strings.
 * @n: size
 * @s1: parameter value
 * @s2: parameter value
 * Return: a pointer to a newly allocated space in memory
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *new_string;
	unsigned int len1 = 0, len2 = 0, x;

	if (s1 == NULL)
		s1 = "";

	if (s2 == NULL)
		s2 = "";

	while (s1[len1] != '\0')
	{
		len1++;
	}

	while (s2[len2] != '\0')
	{
		len2++;
	}

	if (n > len2)
	n = len2;
	new_string = malloc((len1 + n + 1) * sizeof(char));

	if (new_string == NULL)
		return (0);

	for (x = 0; x < len1; x++)
	{
		new_string[x] = s1[x];
	}

	for (; x < (len1 + n); x++)
	{
		new_string[x] = s2[x - len1];
	}
	new_string[x] = '\0';

return (new_string);
}
