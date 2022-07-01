#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int s;
	char d;

	for (s = '0'; s <= '9'; s++)
		putchar(s);
	for (d = 'a'; d <= 'f'; d++)
		putchar(d);
	putchar('\n');

	return (0);
}
