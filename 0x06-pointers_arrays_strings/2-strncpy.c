#include "main.h"
#include <string.h>
/**
 * _strncpy - copy n bytes from a string to another
 * @dest: destination string
 * @src: source string
 * @n: number of bytes of str to concatenate
 * Return: a pointer to the resulting string dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int y = 0;

	while (y < n && src[y] != '\0')
	{
		src[y] = dest[y];
		y++;
	}
	while (y < n)
	{
		dest[y] = '\0';
		y++;
	}
	return (dest);
}
