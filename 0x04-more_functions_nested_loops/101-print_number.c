#include "main.h"
#include <stdio.h>

/**
 * print_number - Prints an integer.
 * @n: The integer to prints.
 *
 * Return: nothing
 */

void print_number(int m)
{
	unsigned int s = m;

	if (m < 0)
	{
		m *= -1;
		s = m;
		_putchar('-');
	}

	s /= 10;

	if (s != 0)
		print_number(s);

	_putchar((unsigned int) m % 10 + '0');

}
