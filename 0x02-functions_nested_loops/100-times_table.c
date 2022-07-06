#include "main.h"
/**
 * print_times_table - prints times table for numbers from 0-14
 * @n: An input integer value
 * Return: Nothing
 */
void print_times_table(int n)
{
	int x, y, mult;

	if (n >= 0 && n <= 15)
	{
		for (x = 0; x <= n; x+)
		{
			_putchar('0');
			
			for (y = 0; y <= n; y++)
			{
				_putchar(',');
				_putchar(' ');
				
				mult = x * y;
				
				if (mult <= 99)
					_putchar(' ');
				if (mult < 9)
					_putchar(' ');
				
				if (mult >= 100)
				{
					_putchar((mult / 100) + '0');
					_putchar(((mult / 10)) % 10 + '0');
				}
				else if (mult <= 99 && mult >= 10)
				{
					_putchar((mult / 10) + '0');
				}
				_putchar((mult % 10) + '0');
			}
			_putchar('\n');
		}
	}
}
