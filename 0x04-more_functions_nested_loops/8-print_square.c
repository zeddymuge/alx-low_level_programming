#include "main.h"

/**
 * print_square - function that prints a square, followed by a new line.
 * @size: size is the size of the square
 * If size is 0 or less, the function should print only a new line
 * @#: print the square
 * Return: Always 0
 */
void print_square(int size);
{
	int x, y;

	if (size > 0)
	{
		for (x = 0; x < size; x++)
		{
			for (y = 0; y < size; y++)
				_putchar('#');
			_putchar('\n');
		}
	}
	else
		_putchar('\n');
}

