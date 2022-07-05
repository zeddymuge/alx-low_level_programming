#include "main.h"
/**
 * print_sign - checks main
 * @n: An input number
 * Description: Tohis function prints the sign of the number
 * Return: 1 if number is positive, o if number is 0, or
 * -1 if number is negative
 */
int print_sign(int n)
{
	int solution;

	if (n > 0)
	{
		solution = 1;
		_putchar('+');
	}
	else if (n == 0)
	{
		solution = 0;
		_putchar('0');
	}
	else
	{
		solution = -1;
		_putchar('-');
	}

	return (solution);
}
