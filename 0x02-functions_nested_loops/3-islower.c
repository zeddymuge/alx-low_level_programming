#include "main.h"
/**
 * islower - checks for alphabetical letters
 * @c: a character to be checked on
 * Description: function uses _putchar function to print
 * Return: 1 if is lowercase or 0 if is uppercase
 */
int _islower(int c);
{
	char a;
	int lower = 0;

	for (a = 'a'; a <= 'z'; a++)
	{
		if (a == c)
			lower = 1;
	}

	return (lower);
}
