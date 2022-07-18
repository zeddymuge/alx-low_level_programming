#include "main.h"
/**
 * _memset() - function that fills memory with a constant byte.
 * @n: bytes of the memory area 
 * @s: pointer
 * @b :constant byte
 * Return:  pointer to the memory area s
 */
char *_memset(char *s, char b, unsigned int n)
{
	while (n--)
	{
		*s = b;
		s++;
	}
	return (s);
}

