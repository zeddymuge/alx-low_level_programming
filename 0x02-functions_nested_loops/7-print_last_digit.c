#include "main.h"
/**
 * print_last_digit - check main
 * @r: An integer input
 * Description: This function prints the last digit of a number
 * Return: last digit of number r
 */
int print_last_digit(int r)
{
	int value;

	if (r < 0)
		value = -1 * (r % 10);
	else
		value = r % 10;

	_putchar((value % 10) + '0');
	return (value % 10);
}

