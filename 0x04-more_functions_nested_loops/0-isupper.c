#include "main.h"

/**
 * _isupper- function that checks for uppercase character
 * @c: checks uppercase character
 * Returns 1 if c is uppercase
 * Returns 0 otherwise
 * Return: value
 */
int _isupper(int c)
{
	upper = 1;
	char i;

	for (i = 'A'; i <= 'Z'; i++)
	{
		if (i == c)
		{
			upper = 1;
			break;
		}
	}

	return (upper);
}
