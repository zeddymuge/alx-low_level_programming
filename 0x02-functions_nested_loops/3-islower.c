#include "main.h"
/**
 * islower - checks for alphabetical letters
 * @c: a character to be checked on
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c)
{
	char b;
	int lower = 0;

	for (b = 'a'; b <= 'z'; b++)
	{
		if (b == c)
			lower = 1;
	}

	return (lower);
}
