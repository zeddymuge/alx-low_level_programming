#include "main.h"

/**
 * swap_int - swaps the values of two integers
 * @a: input integer;
 * @b: input integer
 * Return: nothing
 */
void swap_int(int *a, int *b)
{
	int sw = *a;
	*a = *b;
	*b = sw;
}
