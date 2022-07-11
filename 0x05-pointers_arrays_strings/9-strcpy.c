#include "main.h"
#include <string.h>
/**
 * _strcpy - copies the string
 * @dest: A buffer to copy the string to
 *  @src: The source string to copy.
 *  Return: A pointer to the destination string @dest.
 */
char *_strcpy(char *dest, char *src)
{
	int x = 0;

	while (src[x])
	{
		dest[x] = src[x];
		x++;
	}

	return (dest);
}
