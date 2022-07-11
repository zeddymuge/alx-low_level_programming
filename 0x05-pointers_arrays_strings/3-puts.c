#include "main.h"
/**
 * _puts - function that prints a string
 * @str: input string
 * REturn: nothing
 */
void _puts(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
