#include "main.h"
#include <string.h>
/**
 * puts2 -  prints every other character of a string
 * @str: input character
 * Return: nothing
 */
void puts2(char *str)
{
	int x;
	int len;

	len = strlen(str);
	for (x = 0; x < len; x += 2)
		_putchar(str[x]);
	_putchar('\n');
}
