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
	int upper = 1;
	char i = 'A';

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
