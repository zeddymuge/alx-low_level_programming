#include "main.h"

/**
 * print_diagonal - a function that draws a diagonal line on the terminal.
 * print_diagonal: draws a diagonal line on the terminal.
 * @n: The number of \ characters to be printed.
 * Return: Always 0
 */

void print_diagonal(int n)
{
	int j, k;

	if (n > 0)
	{
		for (j = 0; j < n; j++)
		{
			for (k = 0; k < j; k++)
				_putchar(' ');
			_putchar('\\');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}
