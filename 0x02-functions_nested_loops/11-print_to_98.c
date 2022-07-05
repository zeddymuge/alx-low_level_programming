#include <stdio.h>
#include "main.h"
/**
 * print_to_98 - Check main
 * print_to_98 - Check
 * Description: function that prints all natural numbers
 * from w to 98, followed by a new line.
 * Return: Nothing
 */
void print_to_98(int w)
{
	if (w <= 98)
	{
		for (; w <= 98; w++)
		{
			printf("%d", w);

			if (w == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
	else
	{
		for (; w >= 98; w--)
		{
			printf("%d", w);

			if (w == 98)
				continue;
			printf(", ");
		}
		printf("\n");
	}
}
