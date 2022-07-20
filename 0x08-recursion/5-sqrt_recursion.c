#include "main.h"
#include <stdio.h>
int _sqrt(int c, int d);
/**
 * _sqrt_recursion - a function that returns the natural
 * square root of a number.
 * @n: input integer
 * Return: natural square root of a number
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);

	return (_sqrt(1, n));
}

/**
 * _sqrt - find square root
 * @c: previous value
 * @d: square root value
 * Return: the square root
 */
int _sqrt(int c, int d)
{
	if (c > d)
		return (-1);
	else if (c * c == d)
		return (c);
	return (_sqrt(c + 1, d));
}
