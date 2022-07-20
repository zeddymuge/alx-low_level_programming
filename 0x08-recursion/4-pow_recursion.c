#include "main.h"
#include <stdio.h>
#include <math.h>
/**
 * _pow_recursion - function that returns the value of
 * x raised to the power of y
 * @x: input integer
 * @y: input integer
 * Return: value of x raised to the power of y
 */
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	else if (y == 1)
		return (x);
	return (x *= _pow_recursion(x, y - 1));
}
