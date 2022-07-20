#include "main.h"
#include <stdio.h>
int is_divisible(int x, int y);
/**
 * is_prime_number - a function that returns 1 if the
 * input integer is a prime number,
 * @n: input integer
 * Return: 1 if the input integer is a prime number
 * otherwise return 0
 */
int is_prime_number(int n)
{
	int y = 2;

	if (n <= 1)
		return (0);
	if (n <= 3)
		return (1);

	return (is_divisible(n, y));
}
/**
 * is_divisible - check if num is divisible
 * @x: the number to be checked
 * @y: the result of division
 * Return: 1 if num is divisible or 0 if numis not divisible
 */
int is_divisible(int x, int y)
{
	if (x % y == 0)
		return (0);
	if (y == x / 2)
		return (1);

	return (is_divisible(x, y + 1));
}

