#include <stdio.h>
#include "3-calc.h"
#include <stdlib.h>

/**
 * op_add - function tha calculate sum of a and b
 * @a: input integer
 * @b: input integer
 * Return: sum
 */
int op_add(int a, int b)
{
	return (a + b);
}

/**
 * op_sub - function that calculate difference
 * @a: input integer
 * @b: input intrger
 * Return: difference
 */
int op_sub(int a, int b)
{
	return (a - b);
}

/**
 * op_mul - function for product
 * @a: input integer
 * @b: input intrger
 * Return: product;
 */
int op_mul(int a, int b)
{
	return (a * b);
}

/**
 * op_div -  function that calculate division
 * @a: input integer
 * @b: input integer
 * Return: division
 */
int op_div(int a, int b)
{
	if (b == 0)
	{
		printf("Error \n");
		exit(100);
	}

	return (a / b);
}

/**
 * op_mod - calculate modulus of a and b
 * @a: input integer
 * @b: input integer
 * Return: modulus of a and b
 */
int op_mod(int a, int b)
{
	if (b == 0)
	{
		printf("Error\n");
		exit(100);
	}

	return (a % b);
}
