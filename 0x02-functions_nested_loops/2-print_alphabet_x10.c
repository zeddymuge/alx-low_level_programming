#include "main.h"
/**
 * print_alphabet_x10 - >print alphabet in lowercase 10 times
 * Description: function uses _putchar function to print
 * Return: Nothing.
 */
void print_alphabet_x10(void)
{
	char a;
	int b;

	for (b = 0; b < 10; b++)
	{
		for (a = 'a'; a <= 'z'; a++)
		{
			_putchar(a);
		}
		_putchar('\n');
	}
}

