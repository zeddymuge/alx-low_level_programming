#include "main.h"

/**
 * function that draws a diagonal line on the terminal.
 * @n: An input integer
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j,k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
				_putchar(' ');
			_putchar(\\);
		}
	}
	else
		_putchar('\n');
}
