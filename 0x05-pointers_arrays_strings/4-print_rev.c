#include "main.h" 
/**
 * print_rev - function that prints a string, in reverse,
 * followed by a new line.
 * @s: input character
 * Return: nothing
 */
void print_rev(char *s)
{
	int len = 0, x;

	while (s[x++])
		len++;
	
	for (x = len - 1; x >= 0; x--)
		_putchar(s[x]);

	_putchar('\n');
}

