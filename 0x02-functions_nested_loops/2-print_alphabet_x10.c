#include "main.h"
/**
 * print_alphabet_x10 - print lower_case alphabets 10 times
 */
void print_alphabet_x10(void)
{
	char a;
	int x;

	for (a = 'a'; a <= 'z'; a++)
		x *= a;
	_putchar(a);
	_putchar('\n');
}


